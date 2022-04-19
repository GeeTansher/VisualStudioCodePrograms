package com.company;

import java.util.Random;
import java.util.Scanner;

public class replaceAll2ByPrimeNumbers {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            Random r= new Random();
            String[] a={"3","5","7"};
            int n=sc.nextInt();
            String[] s=new String[String.valueOf(n).length()];
            int i=0;
            while(n>0){
                String t=String.valueOf(n%10);
                s[i]=t;
                if(Integer.parseInt(s[i])==2){
                    s[i]=a[r.nextInt(3)];
                }
                i++;
                n/=10;
            }
            int j=s.length-1;
            n=0;
            while(j>=0){
                int t=Integer.parseInt(s[j]);
                n=(n*10)+t;
                j--;
            }
            System.out.println(n);
        }
    }
}
