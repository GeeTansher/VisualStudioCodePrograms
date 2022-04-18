package com.company;

import java.util.Scanner;

public class Q1_Strings {
    static Scanner sc = new Scanner(System.in);

    public static void main(String[] args) {

        String s1, s2;
        int ch;
        System.out.println("Enter the first string:");
        s1 = sc.nextLine();
        System.out.println("Enter the second string:");
        s2 = sc.nextLine();
        System.out.println("Index of character...");
        System.out.println("Which string you want to see in action:");
        ch = sc.nextInt();
        if (ch == 1)
            indOfChar(s1);
        else if (ch == 2)
            indOfChar(s2);
        else
            System.out.println("Wrong input...");

        System.out.println("Character at index...");
        System.out.println("Which string you want to see in action:");
        ch = sc.nextInt();
        if (ch == 1)
            charAtInd(s1);
        else if (ch == 2)
            charAtInd(s2);
        else
            System.out.println("Wrong input...");

        System.out.println("Convert to Lower and Upper case...");
        System.out.println("Which string you want to see in action:");
        ch = sc.nextInt();
        if (ch == 1)
            convert(s1);
        else if (ch == 2)
            convert(s2);
        else
            System.out.println("Wrong input...");

        System.out.println("Comparing both strings...");
        compare(s1, s2);

        System.out.println("Substring of s1...");
        substring(s1);

    }

    private static void substring(String s1) {
        int s, e;
        System.out.println("Enter the starting and ending index of substring you want:");
        s = sc.nextInt();
        e = sc.nextInt();
        System.out.println("The substring of S1 as per your entries is:" + s1.substring(s, e + 1));
    }

    private static void compare(String s1, String s2) {
        int cp = s1.compareTo(s2);
        if (cp == 0)
            System.out.println("Both strings are equal.");
        else if (cp < 0)
            System.out.println("S2 is greater than S1.");
        else
            System.out.println("S1 is greater than S2.");

    }

    private static void convert(String s) {
        System.out.println("The string in Upper case is:" + s.toUpperCase());
        System.out.println("The string in Lower case is:" + s.toLowerCase());
    }

    private static void charAtInd(String s) {
        int ind;
        System.out.println("Enter the index at which you want to see the character:");
        ind = sc.nextInt();
        System.out.println("The character at the index is:" + s.charAt(ind));
    }

    private static void indOfChar(String s) {
        char ch;
        System.out.println("Enter the character of which you want to see index:");
        ch = sc.next().charAt(0);
        System.out.println("The index of the character is:" + s.indexOf(ch));
    }
}
