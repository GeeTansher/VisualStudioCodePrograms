package com.company;

import java.util.Scanner;

public class zigzagPattern {
    public static void main(String[] args) {
        int n;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter the no of elements:");
            n = sc.nextInt();
            int[] ar = new int[n];
            System.out.println("Enter elements:");
            for (int i = 0; i < n; i++) {
                ar[i] = sc.nextInt();
            }
            boolean b = true;
            for (int i = 0; i < n - 1; i++) {
                if (b && ar[i] > ar[i + 1]) {
                    ar[i] = ar[i] + ar[i + 1];
                    ar[i + 1] = ar[i] - ar[i + 1];
                    ar[i] = ar[i] - ar[i + 1];
                } else if (!b && ar[i] < ar[i + 1]) {
                    ar[i] = ar[i] + ar[i + 1];
                    ar[i + 1] = ar[i] - ar[i + 1];
                    ar[i] = ar[i] - ar[i + 1];
                }
                b = !b;
            }
            System.out.println("The zigzag array is:");
            for (int i = 0; i < n; i++) {
                System.out.print(ar[i] + " ");
            }
        }
    }

}
