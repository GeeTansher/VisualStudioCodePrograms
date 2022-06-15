package com.company;

import java.util.Scanner;

public class maturityAmount {
    public static void main(String[] args) {
        int ch;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the choice:"
                + "\n1. Term Deposit"
                + "\n2. Recurring Deposit");
        ch = sc.nextInt();
        switch (ch) {
            case 1:
                float p, r, n, A;
                System.out.println("Enter principal:");
                p = sc.nextFloat();
                System.out.println("Enter rate of interest:");
                r = sc.nextFloat();
                System.out.println("Enter the time period in years:");
                n = sc.nextFloat();
                A = p * (1 + (r / 100)) * n;
                System.out.println("The maturity amount is:" + A);
                break;
            case 2:
                System.out.println("Enter monthly installment:");
                p = sc.nextFloat();
                System.out.println("Enter rate of interest:");
                r = sc.nextFloat();
                System.out.println("Enter the time period in months:");
                n = sc.nextFloat();
                A = (p * n) + p * (n * (n + 1) / 2) * (r / 100) * (1 / 12);
                System.out.println("The maturity amount is:" + A);
                break;
            default:
                System.out.println("You have entered something wrong.");
        }
        sc.close();
    }
}
