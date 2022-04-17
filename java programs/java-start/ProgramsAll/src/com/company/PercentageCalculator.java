package com.company;

import java.util.Scanner;

public class PercentageCalculator {
    public PercentageCalculator() {
    }

    public static void main(String[] args) {
        float total = 500.0F;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the marks in 5 subjects: ");
        float f1 = sc.nextFloat();
        float f2 = sc.nextFloat();
        float f3 = sc.nextFloat();
        float f4 = sc.nextFloat();
        float f5 = sc.nextFloat();
        float sum = f1 + f2 + f3 + f4 + f5;
        float per = sum / total * 100.0F;
        System.out.println("The percentage is " + per);
    }
}
