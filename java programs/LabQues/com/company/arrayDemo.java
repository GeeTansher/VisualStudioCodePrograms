package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class arrayDemo {
    private static void arrayFunc(int[] ar, int target) {
        Arrays.sort(ar);
        System.out.println("The pairs are:");
        int i = 0, j = ar.length - 1;
        while (i < j) {
            if (ar[i] + ar[j] == target) {
                System.out.println("(" + ar[i] + " , " + ar[j] + ")");
                i++;
            } else if (ar[i] + ar[j] > target) {
                j--;
            } else {
                i++;
            }
        }
    }

    private static void arrayFunc(int[] A, int p, int[] B, int q) {
        int[] arr = new int[p + q];
        int i;
        System.arraycopy(A, 0, arr, 0, p);
        System.arraycopy(B, 0, arr, p, q);
        Arrays.sort(arr);
        for (i = 0; i < p; i++) {
            A[i] = arr[i];
        }
        for (i = 0; i < q; i++) {
            B[i] = arr[p + i];
        }
        System.out.println("Changed arrays:");
        System.out.print("A:");
        for (i = 0; i < p; i++) {
            System.out.print(A[i] + " ");
        }
        System.out.println();
        System.out.print("B:");
        for (i = 0; i < q; i++) {
            System.out.print(B[i] + " ");
        }
    }

    public static void main(String[] args) {
        int ch;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("What you want to do?"
                    + "\n1. Target hunt pairs"
                    + "\n2. Merge two arrays in sorted way");
            ch = sc.nextInt();
            if (ch == 1) {
                int n;
                System.out.println("Enter the number of elements:");
                n = sc.nextInt();
                int[] ar = new int[n];
                System.out.println("Enter elements:");
                for (int i = 0; i < n; i++) {
                    ar[i] = sc.nextInt();
                }
                System.out.println("Enter target");
                int target = sc.nextInt();
                arrayFunc(ar, target);
            } else if (ch == 2) {
                int p;
                System.out.println("Enter the number of elements of 1st array:");
                p = sc.nextInt();
                int[] ar = new int[p];
                System.out.println("Enter elements:");
                for (int i = 0; i < p; i++) {
                    ar[i] = sc.nextInt();
                }
                int q;
                System.out.println("Enter the number of elements of 2nd array:");
                q = sc.nextInt();
                int[] arr = new int[q];
                System.out.println("Enter elements:");
                for (int i = 0; i < q; i++) {
                    arr[i] = sc.nextInt();
                }
                arrayFunc(ar, p, arr, q);
            } else {
                System.out.println("Wrong input.");
            }
        }
    }
}
