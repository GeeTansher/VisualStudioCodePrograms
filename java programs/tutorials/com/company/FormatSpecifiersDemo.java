package com.company;

import java.util.Formatter;

public class FormatSpecifiersDemo {
    public FormatSpecifiersDemo() {
    }

    public static void main(String[] args) {
        Formatter formatter = new Formatter();
        System.out.println();
        System.out.println("===== Space format specifier =====");
        System.out.println();
        formatter.format("%d", -111);
        System.out.println(formatter);
        formatter = new Formatter();
        formatter.format("% d", 111);
        System.out.println(formatter);
        formatter = new Formatter();
        formatter.format("% d", -222);
        System.out.println(formatter);
        formatter = new Formatter();
        formatter.format("% d", 222);
        System.out.println(formatter);
        System.out.println();
        System.out.println("===== + Sign Specifier =====");
        System.out.println();
        formatter = new Formatter();
        formatter.format("%+d", 111);
        System.out.println(formatter);
        formatter = new Formatter();
        formatter.format("%+d", -111);
        System.out.println(formatter);
        System.out.println();
        System.out.println("===== ( specifier =====");
        System.out.println();
        formatter = new Formatter();
        formatter.format("%(d", -111);
        System.out.println(formatter);
        formatter = new Formatter();
        formatter.format("%(d", 111);
        System.out.println(formatter);
        System.out.println();
        System.out.println("===== Comma, Specifier =====");
        System.out.println();
        formatter = new Formatter();
        formatter.format("%, d", 1000000);
        System.out.println(formatter);
        formatter = new Formatter();
        formatter.format("%, .3f", 3.26595265664521E10D);
        System.out.println(formatter);
        System.out.println();
        System.out.println("===== Left Justification(-) Specifier =====");
        System.out.println();
        formatter = new Formatter();
        formatter.format("|%20.4f|", 1234.1234D);
        System.out.println(formatter);
        formatter = new Formatter();
        formatter.format("|%-20.4f|", 1234.1234D);
        System.out.println(formatter);
        System.out.println();
        System.out.println("===== The %n format specifiers =====");
        System.out.println();
        formatter = new Formatter();
        formatter.format("Learn IT %nJava Courses %nby IT-Bulls");
        System.out.println(formatter);
        System.out.println();
        System.out.println("===== The %% format specifiers =====");
        System.out.println();
        formatter = new Formatter();
        formatter.format("10 %% 4 = 2");
        System.out.println(formatter);
        System.out.println();
        System.out.println("===== The %x %X format specifiers =====");
        System.out.println();
        formatter = new Formatter();
        formatter.format("%x", 250);
        System.out.println("LowerCase Hexadecimal using %x: " + formatter);
        formatter = new Formatter();
        formatter.format("%X", 250);
        System.out.println("UpperCase Hexadecimal using %X: " + formatter);
        System.out.println();
        System.out.println("===== The %e %E format specifiers =====");
        System.out.println();
        formatter = new Formatter();
        formatter.format("%e", 123.1234D);
        System.out.println("LowerCase Scientific Notation using %e: " + formatter);
        formatter = new Formatter();
        formatter.format("%E", 123.1234D);
        System.out.println("UpperCase Scientific Notation using %E: " + formatter);
        System.out.println();
        System.out.println("===== Precision Formats =====");
        System.out.println();
        formatter = new Formatter();
        formatter.format("%16.2e", 123.1234567D);
        System.out.println("Scientific notation to 2 places: " + formatter);
        formatter = new Formatter();
        formatter.format("%.4f", 123.1234567D);
        System.out.println("Decimal floating-point notation to 4 places: " + formatter);
        formatter = new Formatter();
        formatter.format("%.4g", 123.1234567D);
        System.out.println("Scientific or Decimal floating-point notation to 4 places: " + formatter);
        formatter = new Formatter();
        formatter.format("%.15s", "12345678901234567890");
        System.out.println("String notation to 15 places: " + formatter);
        formatter = new Formatter();
        formatter.format("%010d", 88);
        System.out.println("value in 10 digits: " + formatter);
    }
}
