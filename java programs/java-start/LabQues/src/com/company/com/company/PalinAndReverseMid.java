package com.company;

import java.util.Scanner;

interface interA{
    abstract void countPalin(String s);
    abstract void reverseWord(String s);
}

public class PalinAndReverseMid implements interA{
    public static void main(String[] args) {
        PalinAndReverseMid pr = new PalinAndReverseMid();
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter string:");
            String s=sc.nextLine();
            pr.countPalin(s);
            pr.reverseWord(s);
        }
    }

    @Override
    public void countPalin(String s) {
        int ctr=0;
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                String str= s.substring(i,j+1);
                int k=0,l=str.length()-1;
                boolean b=true;
                while(k<=l){
                    if(str.charAt(k)!=str.charAt(l)){
                        b=false;
                    }
                    k++;l--;
                }
                if(b==true){
                    ctr++;
                    System.out.println(str);
                }
            }
        }
        System.out.println("The total palindromic substrings are:"+ctr);
    }

    @Override
    public void reverseWord(String s) {
        s+=" ";
        String ans="";
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if(s.charAt(j)==32){
                    StringBuilder str= new StringBuilder(s.substring(i,j+1));
                    str.reverse();
                    ans+=str.toString();
                    ans+=" ";
                    i=j+1;
                    j=i+1;
                }
            }
        }
        System.out.println("The string is:"+ans);
    }    
}
