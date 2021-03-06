/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class io_realm_internal_CheckedRow */

#ifndef _Included_io_realm_internal_CheckedRow
#define _Included_io_realm_internal_CheckedRow
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetColumnCount
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_CheckedRow_nativeGetColumnCount
  (JNIEnv *, jobject, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetColumnName
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_CheckedRow_nativeGetColumnName
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetColumnIndex
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_CheckedRow_nativeGetColumnIndex
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetColumnType
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_io_realm_internal_CheckedRow_nativeGetColumnType
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetLong
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_CheckedRow_nativeGetLong
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetBoolean
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_CheckedRow_nativeGetBoolean
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetFloat
 * Signature: (JJ)F
 */
JNIEXPORT jfloat JNICALL Java_io_realm_internal_CheckedRow_nativeGetFloat
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetDouble
 * Signature: (JJ)D
 */
JNIEXPORT jdouble JNICALL Java_io_realm_internal_CheckedRow_nativeGetDouble
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetTimestamp
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_CheckedRow_nativeGetTimestamp
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetString
 * Signature: (JJ)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_io_realm_internal_CheckedRow_nativeGetString
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeIsNullLink
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_io_realm_internal_CheckedRow_nativeIsNullLink
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetByteArray
 * Signature: (JJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_io_realm_internal_CheckedRow_nativeGetByteArray
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetLinkView
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_CheckedRow_nativeGetLinkView
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeSetLong
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_CheckedRow_nativeSetLong
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeSetBoolean
 * Signature: (JJZ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_CheckedRow_nativeSetBoolean
  (JNIEnv *, jobject, jlong, jlong, jboolean);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeSetFloat
 * Signature: (JJF)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_CheckedRow_nativeSetFloat
  (JNIEnv *, jobject, jlong, jlong, jfloat);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeGetLink
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_io_realm_internal_CheckedRow_nativeGetLink
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeSetDouble
 * Signature: (JJD)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_CheckedRow_nativeSetDouble
  (JNIEnv *, jobject, jlong, jlong, jdouble);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeSetTimestamp
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_CheckedRow_nativeSetTimestamp
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeSetString
 * Signature: (JJLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_CheckedRow_nativeSetString
  (JNIEnv *, jobject, jlong, jlong, jstring);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeSetByteArray
 * Signature: (JJ[B)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_CheckedRow_nativeSetByteArray
  (JNIEnv *, jobject, jlong, jlong, jbyteArray);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeSetLink
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_CheckedRow_nativeSetLink
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     io_realm_internal_CheckedRow
 * Method:    nativeNullifyLink
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_io_realm_internal_CheckedRow_nativeNullifyLink
  (JNIEnv *, jobject, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
