package me.mtagab.security;

public class Verification {
    static {
        System.loadLibrary("mtagab");
    }

    public native void approvalcode(String code);
    public native boolean authenticated();

}
