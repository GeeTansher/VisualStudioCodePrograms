package com.company;




import java.util.Arrays;

public class Tut_1Arrays {
    public Tut_1Arrays() {
    }

    public static void main(String[] args) {
        int[] arr = new int[10];
        System.out.println(arr.length);
        double[] arr1 = new double[20];
        System.out.println(arr1[3]);
        int[] ar = new int[]{3, 4, 2, 1};
        System.out.println(Arrays.toString(ar));
        Arrays.sort(ar);
        System.out.println(Arrays.toString(ar));
    }
}
