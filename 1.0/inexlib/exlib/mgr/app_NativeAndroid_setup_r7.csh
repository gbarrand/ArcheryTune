#!/bin/csh

set sdk_home=/usr/local/Android/android-sdk_r16-macosx
set ndk_home=/usr/local/Android/android-ndk-r7

setenv PATH "${sdk_home}/tools:${PATH}"
setenv PATH "${sdk_home}/platform-tools:${PATH}"
setenv PATH "${ndk_home}:${PATH}"

unset android_sdk_home
unset android_ndk_home
