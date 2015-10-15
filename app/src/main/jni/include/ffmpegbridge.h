/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_arenacloud_broadcast_ffmpegbridge_FFmpegBridge */

#ifndef _Included_com_arenacloud_broadcast_ffmpegbridge_FFmpegBridge
#define _Included_com_arenacloud_broadcast_ffmpegbridge_FFMpegWrapper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_arenacloud_broadcast_ffmpegbridge_FFmpegBridge
 * Method:    init
 * Signature: (Lio/cine/ffmpegbridge/FFmpegBridge/AVOptions;)V
 */
JNIEXPORT jint JNICALL Java_com_arenacloud_broadcast_ffmpegbridge_FFmpegBridge_init
  (JNIEnv *, jobject, jobject);

/*
 * Class:     io_cine_ffmpegbridge_FFmpegBridge
 * Method:    setAudioCodecExtraData
 * Signature: (Ljava/nio/ByteBuffer;I)V
 */
JNIEXPORT void JNICALL Java_com_arenacloud_broadcast_ffmpegbridge_FFmpegBridge_setAudioCodecExtraData
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     io_cine_ffmpegbridge_FFmpegBridge
 * Method:    setVideoCodecExtraData
 * Signature: (Ljava/nio/ByteBuffer;I)V
 */
JNIEXPORT void JNICALL Java_com_arenacloud_broadcast_ffmpegbridge_FFmpegBridge_setVideoCodecExtraData
  (JNIEnv *, jobject, jbyteArray, jint);

/*
 * Class:     io_cine_ffmpegbridge_FFmpegBridge
 * Method:    writeHeader
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_arenacloud_broadcast_ffmpegbridge_FFmpegBridge_writeHeader
  (JNIEnv *, jobject);

/*
 * Class:     io_cine_ffmpegbridge_FFmpegBridge
 * Method:    writePacket
 * Signature: (Ljava/nio/ByteBuffer;ILII)V
 */
JNIEXPORT jint JNICALL Java_com_arenacloud_broadcast_ffmpegbridge_FFmpegBridge_writePacket
(JNIEnv *, jobject, jobject, jint, jlong, jint, jint);

/*
 * Class:     io_cine_ffmpegbridge_FFmpegBridge
 * Method:    finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_arenacloud_broadcast_ffmpegbridge_FFmpegBridge_finalize
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
/* Header for class io_cine_ffmpegbridge_FFmpegBridge_AVOptions */

#ifndef _Included_com_arenacloud_broadcast_ffmpegbridge_FFmpegBridge_AVOptions
#define _Included_com_arenacloud_broadcast_ffmpegbridge_FFmpegBridge_AVOptions
#ifdef __cplusplus
extern "C" {
#endif
#ifdef __cplusplus
}
#endif
#endif
