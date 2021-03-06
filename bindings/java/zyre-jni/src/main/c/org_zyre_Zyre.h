/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_zyre_Zyre */

#ifndef _Included_org_zyre_Zyre
#define _Included_org_zyre_Zyre
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_zyre_Zyre
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_zyre_Zyre_nativeInit
  (JNIEnv *, jclass);

/*
 * Class:     org_zyre_Zyre
 * Method:    create
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_zyre_Zyre_create
  (JNIEnv *, jobject);

/*
 * Class:     org_zyre_Zyre
 * Method:    destroy
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_zyre_Zyre_destroy
  (JNIEnv *, jobject);

/*
 * Class:     org_zyre_Zyre
 * Method:    join
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zyre_Zyre_join
  (JNIEnv *, jobject, jstring);

/*
 * Class:     org_zyre_Zyre
 * Method:    shout
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zyre_Zyre_shout
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_zyre_Zyre
 * Method:    whisper
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_zyre_Zyre_whisper
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     org_zyre_Zyre
 * Method:    recv
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_zyre_Zyre_recv
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
