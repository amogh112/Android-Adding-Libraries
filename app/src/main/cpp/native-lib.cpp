#include <jni.h>
#include <string>
#include <opencv2/shape.hpp>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_amogh_opencv_1android_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNICALL void Java_com_example_amogh_opencv_1android_EdgeDetection_detectEdges(JNIEnv*, jobject , jlong gray){
cv::Mat&edges = *(cv::Mat *) gray;
cv::Canny(edges, edges, 50, 250);
}
