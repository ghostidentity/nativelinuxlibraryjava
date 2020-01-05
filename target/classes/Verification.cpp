#include <jni.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include "me_mtagab_security_Verification.h"

using namespace std;

bool authenticated = false;

JNIEXPORT void JNICALL Java_me_mtagab_security_Verification_approvalcode
  (JNIEnv *env, jobject obj, jstring javaString) {

    jboolean isCopy;

    const char *convertedValue = (env)->GetStringUTFChars(javaString, &isCopy);
    std::string string = std::string(convertedValue, 10);

    if(strcmp(convertedValue, "4211c258-75bf-4f44-891b-c214b268e877") != 0 ) {
        authenticated = false;
    } else {
        authenticated = true;
    }

    return;
  }

JNIEXPORT jboolean JNICALL Java_me_mtagab_security_Verification_authenticated
  (JNIEnv *, jobject) {
    return authenticated;
  }


