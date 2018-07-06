package vendor.oppo.hardware.biometrics.fingerprintpay.V1_0;


public final class FPayStatusCode {
    public static final int STATUS_OK = 0;
    public static final int ERROR_NOT_SUPPORTED = -1; // (-1)
    public static final int ERROR_FAILED = -2; // (-2)
    public static final String toString(int o) {
        if (o == STATUS_OK) {
            return "STATUS_OK";
        }
        if (o == ERROR_NOT_SUPPORTED) {
            return "ERROR_NOT_SUPPORTED";
        }
        if (o == ERROR_FAILED) {
            return "ERROR_FAILED";
        }
        return "0x" + Integer.toHexString(o);
    }

    public static final String dumpBitfield(int o) {
        java.util.ArrayList<String> list = new java.util.ArrayList<>();
        int flipped = 0;
        list.add("STATUS_OK"); // STATUS_OK == 0
        if ((o & ERROR_NOT_SUPPORTED) == ERROR_NOT_SUPPORTED) {
            list.add("ERROR_NOT_SUPPORTED");
            flipped |= ERROR_NOT_SUPPORTED;
        }
        if ((o & ERROR_FAILED) == ERROR_FAILED) {
            list.add("ERROR_FAILED");
            flipped |= ERROR_FAILED;
        }
        if (o != flipped) {
            list.add("0x" + Integer.toHexString(o & (~flipped)));
        }
        return String.join(" | ", list);
    }

};

