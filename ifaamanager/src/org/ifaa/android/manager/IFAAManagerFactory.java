package org.ifaa.android.manager;

import android.content.ActivityNotFoundException;
import android.content.ComponentName;
import android.content.Context;
import android.content.Intent;
import android.os.Build;
import android.os.IHwBinder.DeathRecipient;
import android.os.RemoteException;
import android.os.SystemProperties;
import android.os.UserHandle;
import android.util.Log;
import java.util.ArrayList;
import vendor.oppo.hardware.biometrics.fingerprintpay.V1_0.IFingerprintPay;

public class IFAAManagerFactory {
    public static final String TAG = "IFAAManagerFactory";
    private static IFAAManager sFAAManager;

    private static class IFAAManagerOppo extends IFAAManagerV2 implements DeathRecipient {

        private IFingerprintPay mFingerprintPay = null;

        private static final int BIOTypeFingerprint = 0x01;
        private static final int BIOTypeIris = 0x02;

        private static final int ACTIVITY_START_SUCCESS = 0;
        private static final int ACTIVITY_START_FAILED = -1;

        private IFAAManagerOppo() {
        }

        static {
            try {
                System.loadLibrary("teeclientjni");
            } catch (UnsatisfiedLinkError e) {
                Log.e(TAG, e.toString());
            }
        }

        public int getSupportBIOTypes(Context context) {
            return BIOTypeFingerprint;
        }

        public int startBIOManager(Context context, int authType) {
            if (authType != 1) {
                return ACTIVITY_START_FAILED;
            }
            try {
                Intent intent = new Intent();
                intent.addFlags(Intent.FLAG_ACTIVITY_NEW_TASK);
                intent.setComponent(new ComponentName("com.android.settings", "com.android.settings.Settings$SecuritySettingsActivity"));
                context.startActivity(intent);
                return ACTIVITY_START_SUCCESS;
            } catch (ActivityNotFoundException e) {
                return ACTIVITY_START_FAILED;
            }
        }

        public String getDeviceModel() {
            String model = "OPPO-Default";
            if (Build.MODEL.equals("OPPO R6017") || Build.MODEL.equals("OPPO R6018") || Build.MODEL.equals("OPPO R9s") || Build.MODEL.equals("OPPO R9st") || Build.MODEL.equals("OPPO R6027") || Build.MODEL.equals("OPPO R9sk")) {
                model = "OPPO-R9s";
            } else if (Build.MODEL.equals("OPPO R6061") || Build.MODEL.equals("OPPO R6062") || Build.MODEL.equals("OPPO A57") || Build.MODEL.equals("OPPO A57t")) {
                model = "OPPO-R6061";
            } else if (Build.MODEL.equals("OPPO R6037") || Build.MODEL.equals("OPPO R9sPlus") || Build.MODEL.equals("OPPO R9s Plus") || Build.MODEL.equals("OPPO R9s Plust") || Build.MODEL.equals("OPPO R9sPlust")) {
                model = "OPPO-R6037";
            } else if (Build.MODEL.equals("OPPO R6091")) {
                model = "OPPO-R6091";
            } else if (Build.MODEL.equals("OPPO R9 Plustm A") || Build.MODEL.equals("OPPO R9 Plusm A") || Build.MODEL.equals("OPPO R9 Plust A") || Build.MODEL.equals("OPPO R9 Plus A") || Build.MODEL.equals("OPPO R5103")) {
                model = "OPPO-R5103";
            } else if (Build.MODEL.equals("OPPO R6051") || Build.MODEL.equals("OPPO R6052") || Build.MODEL.equals("OPPO R6102") || Build.MODEL.equals("OPPO R6103") || Build.MODEL.equals("OPPO R6118") || Build.MODEL.equals("OPPO R11") || Build.MODEL.equals("OPPO R11t") || Build.MODEL.equals("OPPO R11 Plus") || Build.MODEL.equals("OPPO R11 Plust") || Build.MODEL.equals("OPPO R11 Plusk") || Build.MODEL.equals("OPPO R11 Pluskt")) {
                model = "OPPO-R6051";
            } else if (Build.MODEL.equals("OPPO A77") || Build.MODEL.equals("OPPO A77t")) {
                model = "OPPO-R7001";
            } else if (Build.MODEL.equals("OPPO R11s") || Build.MODEL.equals("OPPO R11st") || Build.MODEL.equals("OPPO R11s Plus") || Build.MODEL.equals("OPPO R11s Plust")) {
                model = "OPPO-R7011";
            } else if (Build.MODEL.equals("CPH1723") || Build.MODEL.equals("CPH1725") || Build.MODEL.equals("CPH1727")) {
                model = "OPPO-R7321";
            } else if (Build.MODEL.equals("OPPO A79") || Build.MODEL.equals("OPPO A79t") || Build.MODEL.equals("OPPO A79k") || Build.MODEL.equals("OPPO A79kt") || Build.MODEL.equals("OPPO A73") || Build.MODEL.equals("OPPO A73t")) {
               model = "OPPO-R7031";
            }
            return model;
        }

        public int getVersion() {
            return 2;
        }

        public byte[] processCmdV2(Context context, byte[] param) {
            if (mFingerprintPay == null) {
                mFingerprintPay = getAliPayService();
            }
            if (mFingerprintPay != null) {
                Log.w(TAG, "processCmdV2: no FingerprintPayService!");
                return null;
            }
            byte[] outbuf = null;
            try {
                ArrayList<Byte> inbuf = new ArrayList();
                for (byte b : param) {
                    inbuf.add(new Byte(b));
                }
                ArrayList<Byte> buf = new ArrayList();
                buf = mFingerprintPay.alipay_invoke_command(inbuf);
                outbuf = new byte[buf.size()];
                for (int i = 0; i < buf.size(); i++) {
                    outbuf[i] = ((Byte) buf.get(i)).byteValue();
                }
            } catch (RemoteException e) {
                Log.e(TAG, "processCmdV2 failed", e);
            }
            return outbuf;
        }

        public String bytesToHexString(byte[] src) {
            StringBuilder stringBuilder = new StringBuilder("");
            if (src == null || src.length <= 0) {
                return null;
            }
            for (byte b : src) {
                String hv = Integer.toHexString(b & 255);
                if (hv.length() < 2) {
                    stringBuilder.append(0);
                }
                stringBuilder.append(hv);
            }
            return stringBuilder.toString();
        }

        public void serviceDied(long cookie) {
            Log.d(TAG, "fingerprintAlipayService died");
            mFingerprintPay = null;
        }

        public IFingerprintPay getAliPayService() {
            IFingerprintPay fingerprintPay = null;
            try {
                fingerprintPay = IFingerprintPay.getService();
                fingerprintPay.asBinder().linkToDeath(this, 0);
            } catch (RemoteException e) {
                Log.e(TAG, "Failed to open fingerprintAlipayService HAL", e);
            }
            if (fingerprintPay == null) {
                Log.e(TAG, "fingerprintPay = null, Failed to open fingerprintAlipayService HAL");
            }
            return fingerprintPay;
        }
    }

    public static IFAAManager getIFAAManager(Context context, int authType) {
        if (authType != 1) {
            return null;
        }
        if (sFAAManager == null) {
            sFAAManager = new IFAAManagerOppo();
        }
        return sFAAManager;
    }
}
