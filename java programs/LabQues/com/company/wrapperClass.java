package com.company;

import java.util.Scanner;

public class wrapperClass {
    public static void main(String[] args) {
        String s = new String();
        Scanner in = new Scanner(System.in);
        System.out.println("Enter the string:");
        s = in.nextLine();
        int d = 0, alpha = 0, sc = 0, v = 0, w = 0;
        for (int i = 0; i < s.length(); i++) {
            if (Character.isDigit(s.charAt(i)))
                d++;
            if (Character.isLetter(s.charAt(i))) {
                alpha++;
                switch (s.charAt(i)) {
                    case 'a':case 'A':case 'e':case 'E':case 'i':case 'I':case 'o':case 'O':case 'u':case 'U':
                        v++;
                }
            }
            if (s.charAt(i)==32)
                w++;
            if (s.substring(i, i + 1).matches("[^A-Za-z0-9]"))
                sc++;
        }

        System.out.println("The no of digits are:" + d
                + "\nThe no. of alphabets are:" + alpha
                + "\nThe no. of special characters are:" + sc
                + "\nThe no. of vowels are:" + v
                + "\nThe no. of words are:" + (w+1));

        in.close();
    }

}
