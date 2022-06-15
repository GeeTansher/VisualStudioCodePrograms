package com.company;

import java.util.Scanner;

public class maxPalinLen {
    static int maxLen=0;
    static String s;
    public static void main(String[] args) {
        String str;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter string:");
            str=sc.nextLine();
        }
        for(int i=0;i<str.length()-1;i++){
            for(int j=i+1;j<str.length();j++){
                checkPalin(str.substring(i,j));
            }
        }
        System.out.println("The palindromic string with maximum length is:"+s);
        System.out.println("Length:"+maxLen);
    }

    private static void checkPalin(String str) {
        boolean ch=true;
        int i=0,j=str.length()-1;
        while(i<=j){
            if(str.charAt(i)!=str.charAt(j)){
                ch=false;
                break;
            }
            i++;j--;
        }
        if(ch==true){
            if(str.length()>maxLen){
                maxLen=str.length();
                s=str;                
            }
        }
    }
}
