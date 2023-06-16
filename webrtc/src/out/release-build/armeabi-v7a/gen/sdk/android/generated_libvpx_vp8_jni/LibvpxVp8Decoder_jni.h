// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/webrtc/LibvpxVp8Decoder

#ifndef org_webrtc_LibvpxVp8Decoder_JNI
#define org_webrtc_LibvpxVp8Decoder_JNI

#include <jni.h>

#include "../../../../../../../sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_REGISTRATION_EXPORT extern const char kClassPath_org_webrtc_LibvpxVp8Decoder[];
const char kClassPath_org_webrtc_LibvpxVp8Decoder[] = "org/webrtc/LibvpxVp8Decoder";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_REGISTRATION_EXPORT std::atomic<jclass> g_org_webrtc_LibvpxVp8Decoder_clazz(nullptr);
#ifndef org_webrtc_LibvpxVp8Decoder_clazz_defined
#define org_webrtc_LibvpxVp8Decoder_clazz_defined
inline jclass org_webrtc_LibvpxVp8Decoder_clazz(JNIEnv* env) {
  return base::android::LazyGetClass(env, kClassPath_org_webrtc_LibvpxVp8Decoder,
      &g_org_webrtc_LibvpxVp8Decoder_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace  webrtc {
namespace jni {

static jlong JNI_LibvpxVp8Decoder_CreateDecoder(JNIEnv* env);

JNI_GENERATOR_EXPORT jlong Java_org_webrtc_LibvpxVp8Decoder_nativeCreateDecoder(
    JNIEnv* env,
    jclass jcaller) {
  return JNI_LibvpxVp8Decoder_CreateDecoder(env);
}


}  // namespace jni
}  // namespace  webrtc

#endif  // org_webrtc_LibvpxVp8Decoder_JNI
