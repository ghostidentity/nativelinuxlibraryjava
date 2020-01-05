# nativelinuxlibraryjava

 The project demonstrates integration of linux native library with Java
    You may reach to me at proxyshadow@gmail.com you can also visit my website at https://mtagab.me
    

Instructions:

1. Create header file from Java class

javac -h . TestJNIString.java

2. Generate sharedObject -- Files can be located at resources folder when you  unzip this project

g++ -fPIC -I"/usr/lib/jvm/java-1.8.0-openjdk-amd64/include" -I"/usr/lib/jvm/java-1.8.0-openjdk-amd64/include/linux" -shared -o libmtagab.so Verification.cpp

3. copy libmtagab.so to linux directory at /user/lib

4. Run DemoApp
