package com.company;

import java.util.Scanner;

public class alphabets {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter two string to merged:");
            String s1,s2;
            s1=sc.nextLine();
            s2=sc.nextLine();
            merge(s1,s2);
            System.out.println("Enter a string to sum up its digits:");
            s1=sc.nextLine();
            merge(s1);
        }
    }

    private static void merge(String s1) {
        int sum=0;
        for(int i=0;i<s1.length();i++){
            if(Character.isDigit(s1.charAt(i))){
                sum+=Integer.parseInt(s1.substring(i,i+1));
                // or
                // sum+=Integer.valueOf(s1.substring(i,i+1));
            }
        }
        System.out.println("The sum is:"+sum);
    }

    private static void merge(String s1, String s2) {
        s1+=s2;
        char[] ch=s1.toCharArray();
        int i=-1;
        for(int j=0;j<s1.length();j++){
            switch(s1.charAt(j)){
                case 'a':case 'A':case 'e':case 'E':case 'i':case 'I':
                case 'o':case 'O':case 'u':case 'U':
                i++;
                char temp=ch[j];
                ch[j]=ch[i];
                ch[i]=temp;
            }
        }
        s1=String.valueOf(ch);
        System.out.println("The string is:"+s1);
    }
}
