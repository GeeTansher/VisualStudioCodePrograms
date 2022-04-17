//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package com.company;

import java.util.Arrays;

public class Compare_memory_types {
    public Compare_memory_types() {
    }

    public static void main(String[] args) {
        int int1 = 128;
        int int2 = 128;
        System.out.println("int1 == int2: " + (int1 == int2));
        System.out.println("1 == 2: false");
        System.out.println("65 == 'A': true");
        Integer i = 128;
        Integer i2 = 128;
        System.out.println("i == i2: " + (i == i2));
        Integer i3 = 127;
        Integer i4 = 127;
        System.out.println("i3 == i4: " + (i3 == i4));
        Integer i5 = new Integer(127);
        Integer i6 = new Integer(127);
        System.out.println("i5 == i6: " + (i5 == i6));
        Integer i7 = 127;
        Integer i8 = 127;
        System.out.println("i7 == i8: " + (i7 == i8));
        System.out.println("i.equals(i2): " + i.equals(i2));
        int[] arr1 = new int[]{1, 2, 3};
        int[] arr2 = new int[]{1, 2, 3};
        System.out.println("arr1 == arr2: " + (arr1 == arr2));
        System.out.println("arr1.equals(arr2): " + arr1.equals(arr2));
        System.out.println("Arrays.equals(arr1, arr2): " + Arrays.equals(arr1, arr2));
        System.out.println(arr2 == arr2);
    }
}
