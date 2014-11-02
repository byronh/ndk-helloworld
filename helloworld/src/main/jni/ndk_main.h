#include <jni.h>

#ifndef _Included_com_byronh_ndk_helloworld_MainActivity
#define _Included_com_byronh_ndk_helloworld_MainActivity

extern "C" {

  JNIEXPORT jstring JNICALL Java_com_byronh_ndk_helloworld_MainActivity_getStringFromNative
      (JNIEnv *env, jobject jobj);

}

#endif