package me.mtagab;

import me.mtagab.security.Verification;

/*
    The project demonstrates integration of linux native library with Java
    You may reach to me at proxyshadow@gmail.com you can also visit my website at https://mtagab.me
 */

public class DemoApp {
    public static void main(String[] args) {
        new Verification().approvalcode("4211c258-75bf-4f44-891b-c214b268e877");
        System.out.println( new Verification().authenticated());
    }

}
