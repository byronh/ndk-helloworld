#include "ndk_main.h"

#include <string.h>

JNIEXPORT jstring JNICALL Java_com_byronh_ndk_helloworld_MainActivity_getStringFromNative
(JNIEnv *env, jobject obj)
  {
      return env->NewStringUTF("Hello World from C++");
  }