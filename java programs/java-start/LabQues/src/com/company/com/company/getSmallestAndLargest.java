package com.company;

import java.util.Scanner;

public class getSmallestAndLargest {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            String s;
            int k;
            System.out.println("Enter string the k");
            s = sc.nextLine();
            k = sc.nextInt();
            getSmaAndLar(s, k);
        }
    }

    private static void getSmaAndLar(String s, int k) {
        String str = s.substring(0, k);
        String g = str, l = str;
        for (int i = 0; i < s.length() - k + 1; i++) {
            int j = i + k - 1;
            str = s.substring(i, j + 1);
            int L = l.compareTo(str);
            if (L > 0) {
                l = str;
            }
            int G = g.compareTo(str);
            if (G < 0) {
                g = s.substring(i, j + 1);
            }
        }
        System.out.println("The smallest string is:" + l
                + "\nThe largest string is:" + g);
    }
}
