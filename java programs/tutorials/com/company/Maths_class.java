package com.company;
public class Maths_class {
    public Maths_class() {
    }

    public static void main(String[] args) {
        System.out.println(3.141592653589793D);
        System.out.println(Math.max(3, 5));
        System.out.println(Math.min(3, 5));
        System.out.println(Math.sqrt(4.0D));
        int absoluteValue = Math.abs(-5);
        System.out.println(absoluteValue);
        System.out.println(Math.sqrt(-1.0D));
        System.out.println(0.0D / 0.0);
        System.out.println(0.0D / 0.0);
        System.out.println(1.0D / 0.0);
        System.out.println(-1.0D / 0.0);
        System.out.println(Math.round(6.666666666666667D));
        System.out.println((double)Math.round(666.6666666666666D) / 100.0D);
        System.out.println(Math.random());
        System.out.println((int)(Math.random() * 100.0D));
        System.out.println((int)(Math.random() * 100.0D) + 100);
    }
}
