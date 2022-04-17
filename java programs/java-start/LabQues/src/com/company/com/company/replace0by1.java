package com.company;

import java.util.Scanner;

public class replace0by1 {
    public static int convert(int n) {
        if(n==0)
            return 1;
        int temp=0;
        while(n>0){
            int last=n%10;
            if(last==0)
                last=1;
            temp=(temp*10)+last;
            n=n/10;
        }
        return reverse(temp); 
    }
    private static int reverse(int temp) {
        if(temp==0)
            return 1;
        int ans=0;
        while(temp>0){
            int last=temp%10;
            ans=(ans*10)+last;
            temp=temp/10;
        }
        return ans;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number:");
        int n = sc.nextInt();

        System.out.println("The new number is:"+convert(n));
        sc.close();
    }
}
