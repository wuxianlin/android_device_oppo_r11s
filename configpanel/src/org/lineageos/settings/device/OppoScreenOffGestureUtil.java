/*
 * Copyright (C) 2015-2016 The CyanogenMod Project
 * Copyright (C) 2017 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package org.lineageos.settings.device;

import android.content.Context;
import android.graphics.Point;
import android.os.PowerManager;
import android.os.PowerManager.WakeLock;
import android.util.Log;
import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class OppoScreenOffGestureUtil {
    private static String TAG = "OppoScreenOffGestureUtil";
    private static String PROC_PATH_COORDINATE = "/proc/touchpanel/coordinate";
    private static String SPLIT_POINT = ",";
    private static String SPLIT_X_Y = ":";
    private static int POINT_COUNT = 6;
    private Context mContext;
    int mFlagClockwise;
    int mGestureType;
    Point[] mPoints;

    OppoScreenOffGestureUtil(Context context) {
        mContext = null;
        mPoints = new Point[POINT_COUNT];
        mFlagClockwise = 1;
        mGestureType = 0;
        mContext = context;
        for (int i = 0; i < mPoints.length; i++) {
            mPoints[i] = new Point();
        }
    }

    public void updateGestureInfo() {
        try {
            String strCoordinate = readFileFromProc(PROC_PATH_COORDINATE);
            String[] strPoint = strCoordinate.split(SPLIT_POINT);
            mGestureType = Integer.parseInt(strPoint[0]);
            for (int i = 0; i < POINT_COUNT; i++) {
                String[] strXY = strPoint[i + 1].split(SPLIT_X_Y);
                mPoints[i].x = Integer.parseInt(strXY[0]);
                mPoints[i].y = Integer.parseInt(strXY[1]);
            }
            mFlagClockwise = Integer.parseInt(strPoint[strPoint.length - 1]);
            for (int k = 0; k < mPoints.length; k++) {
                Log.d(TAG, " ************* " + mPoints[k].x + "  " + mPoints[k].y + "  mFlagClockwise = " + mFlagClockwise + "  mGestureType = " + mGestureType);
            }
        } catch (Exception e) {
            Log.e(TAG, "get gesture info error");
        }
    }

    public String readFileFromProc(String fileName) {
        try {
            FileReader fr = new FileReader(fileName);
            BufferedReader br = new BufferedReader(fr);
            String strline = br.readLine();
            fr.close();
            br.close();
            return strline;
        } catch (IOException e) {
            return "";
        }
    }

    boolean isScreenoffGestureKey(int keyCode) {
        return 134 == keyCode;
    }

    public boolean wake(int gestureType) {
        PowerManager pm = ((PowerManager) mContext.getSystemService("power"));
        WakeLock m_wakeObj = pm.newWakeLock(0x3000001a, "blackGestureWake");
        m_wakeObj.acquire(5000);
        if (gestureType == 1) {
            m_wakeObj.release();
        }
        Log.d("BlackGesture", "wake time = " + System.currentTimeMillis());
        return true;
    }
}
