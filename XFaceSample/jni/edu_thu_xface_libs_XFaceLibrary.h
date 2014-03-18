/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class edu_thu_xface_libs_XFaceLibrary */

#ifndef _Included_edu_thu_xface_libs_XFaceLibrary
#define _Included_edu_thu_xface_libs_XFaceLibrary
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeInitFacerec
 * Signature: (Ljava/lang/String;Ljava/lang/String;IDI)J
 */JNIEXPORT jlong JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeTrainModel(
		JNIEnv *, jclass, jstring, jstring, jstring, jint, jdouble);

/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeInitFacerec
 * Signature: (Ljava/lang/String;Ljava/lang/String;IDI)J
 */JNIEXPORT jlong JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeInitFacerec(
		JNIEnv *, jclass, jstring, jstring, jint, jdouble);
/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeFacerec
 * Signature: (JLjava/lang/String;JII)I
 */JNIEXPORT jint JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeFacerec(
		JNIEnv *, jclass, jstring, jlong, jlong, jint, jint);
/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeDestoryFacerec
 * Signature: (J)I
 */JNIEXPORT jint JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeDestoryFacerec(
		JNIEnv *, jclass, jlong);
/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeCreateObject
 * Signature: (Ljava/lang/String;I)J
 */JNIEXPORT jlong JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeInitFacedetect(
		JNIEnv *, jclass, jstring, jint);

/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeDestroyObject
 * Signature: (J)V
 */JNIEXPORT void JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeDestroyFacedetect(
		JNIEnv *, jclass, jlong);

/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeStart
 * Signature: (J)V
 */JNIEXPORT void JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeStartFacedetect(
		JNIEnv *, jclass, jlong);

/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeStop
 * Signature: (J)V
 */JNIEXPORT void JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeStopFacedetect(
		JNIEnv *, jclass, jlong);

/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeSetFaceSize
 * Signature: (JI)V
 */JNIEXPORT void JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeSetFaceSize(
		JNIEnv *, jclass, jlong, jint);

/*
 * Class:     edu_thu_xface_libs_XFaceLibrary
 * Method:    nativeDetect
 * Signature: (JJJ)V
 */JNIEXPORT void JNICALL Java_edu_thu_xface_libs_XFaceLibrary_nativeFacedetect(
		JNIEnv *, jclass, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
