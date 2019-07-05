/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class template_Pointer */

#ifndef _Included_template_Pointer
#define _Included_template_Pointer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     template_Pointer
 * Method:    getpointersize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_template_Pointer_getpointersize
  (JNIEnv *, jobject);

/*
 * Class:     template_Pointer
 * Method:    native_malloc
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_template_Pointer_native_1malloc
  (JNIEnv *, jobject, jint);

/*
 * Class:     template_Pointer
 * Method:    native_calloc
 * Signature: (II)J
 */
JNIEXPORT jlong JNICALL Java_template_Pointer_native_1calloc
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     template_Pointer
 * Method:    native_realloc
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_template_Pointer_native_1realloc
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     template_Pointer
 * Method:    free
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_template_Pointer_free
  (JNIEnv *, jobject, jlong);

/*
 * Class:     template_Pointer
 * Method:    sizeof
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_template_Pointer_sizeof
  (JNIEnv *, jobject, jlong);

/*
 * Class:     template_Pointer
 * Method:    get
 * Signature: (JI)[B
 */
JNIEXPORT jbyteArray JNICALL Java_template_Pointer_get
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     template_Pointer
 * Method:    set
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_template_Pointer_set
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

#ifdef __cplusplus
}
#endif
#endif