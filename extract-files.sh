#!/bin/bash
#
# Copyright (C) 2016 The CyanogenMod Project
# Copyright (C) 2017-2018 The LineageOS Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set -e

DEVICE=r11s
VENDOR=oppo

# Load extract_utils and do some sanity checks
MY_DIR="${BASH_SOURCE%/*}"
if [[ ! -d "$MY_DIR" ]]; then MY_DIR="$PWD"; fi

LINEAGE_ROOT="$MY_DIR"/../../..

HELPER="$LINEAGE_ROOT"/vendor/lineage/build/tools/extract_utils.sh
if [ ! -f "$HELPER" ]; then
    echo "Unable to find helper script at $HELPER"
    exit 1
fi
. "$HELPER"

if [ $# -eq 0 ]; then
  SRC=adb
else
  if [ $# -eq 1 ]; then
    SRC=$1
  else
    echo "$0: bad number of arguments"
    echo ""
    echo "usage: $0 [PATH_TO_EXPANDED_ROM]"
    echo ""
    echo "If PATH_TO_EXPANDED_ROM is not specified, blobs will be extracted from"
    echo "the device using adb pull."
    exit 1
  fi
fi

# Initialize the helper
setup_vendor "$DEVICE" "$VENDOR" "$LINEAGE_ROOT"

extract "$MY_DIR"/proprietary-files-qc.txt "$SRC"
extract "$MY_DIR"/proprietary-files-qc-perf.txt "$SRC"
extract "$MY_DIR"/proprietary-files.txt "$SRC"

function fix_vendor () {
    sed -i \
        "s/\/system\/$1\//\/vendor\/$1\//g" \
        "$LINEAGE_ROOT"/vendor/"$VENDOR"/"$DEVICE"/proprietary/vendor/"$2"
}

# Camera
fix_vendor etc lib/libmmcamera2_sensor_modules.so
fix_vendor etc lib/hw/camera.sdm660.so
fix_vendor etc lib/libmms_hal_vstab.so

# CNE
fix_vendor etc lib/libwqe.so
fix_vendor etc lib64/libwqe.so
fix_vendor framework etc/permissions/cneapiclient.xml
fix_vendor framework etc/permissions/com.quicinc.cne.xml

# DPM
fix_vendor bin etc/init/dpmd.rc
fix_vendor etc lib/libdpmframework.so
fix_vendor etc lib64/libdpmframework.so
fix_vendor framework etc/permissions/com.qti.dpmframework.xml
fix_vendor framework etc/permissions/dpmapi.xml

# GPS
fix_vendor framework etc/permissions/com.qti.location.sdk.xml
fix_vendor framework etc/permissions/izat.xt.srv.xml

# Postprocessing
fix_vendor framework etc/permissions/com.qti.snapdragon.sdk.display.xml

# Radio
fix_vendor framework etc/permissions/embms.xml
fix_vendor framework etc/permissions/qcrilhook.xml
fix_vendor framework etc/permissions/telephonyservice.xml

# Wi-Fi Display
fix_vendor etc lib/libwfdrtsp.so
fix_vendor etc lib/libwfdservice.so
fix_vendor etc lib/libwfdsm.so
fix_vendor etc lib/libwfduibcsinkinterface.so
fix_vendor etc lib/libwfduibcsrcinterface.so
fix_vendor etc lib64/libwfdrtsp.so
fix_vendor etc lib64/libwfdservice.so
fix_vendor etc lib64/libwfdsm.so
fix_vendor etc lib64/libwfduibcsinkinterface.so
fix_vendor etc lib64/libwfduibcsrcinterface.so
fix_vendor framework etc/init/wfdservice.rc

"$MY_DIR"/setup-makefiles.sh
