package com.company;

import java.text.DecimalFormat;
import java.util.Scanner;

class Area {
    private static final DecimalFormat df = new DecimalFormat("0.000");

    public Area(float l, float b) {
        double A = l * b;
        System.out.println("The area of rectangle is:" + df.format(A));
    }

    public Area(float side) {
        double A = side * side;
        System.out.println("The area of square is:" + df.format(A));
    }

    public Area(double radius) {
        double A = Math.PI * radius * radius;
        System.out.println("The area of circle is:" + df.format(A));
    }

    public Area(double b, double h) {
        double A = (1 * b * h) / 2;
        System.out.println("The area of triangle is:" + df.format(A));
    }
}

class Volume {
    private static final DecimalFormat df = new DecimalFormat("0.000");

    public Volume(float r, float h) {
        double V = Math.PI * r * r * h;
        System.out.println("The volume of cylinder is:" + df.format(V));
    }

    public Volume(float side) {
        double V = side * side * side;
        System.out.println("The volume of cube is:" + df.format(V));
    }

    public Volume(double radius) {
        double V = (4 * Math.PI * radius * radius * radius) / 3;
        System.out.println("The volume of sphere is:" + df.format(V));
    }

    public Volume(double r, double h) {
        double V = (1 * Math.PI * r * r * h) / 3;
        System.out.println("The volume of cone is:" + df.format(V));
    }
}

public class areaVolume {
    public static void main(String[] args) {
        int ch;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Calculate area of:"
                    + "\n1. Rectangle"
                    + "\n2. Circle"
                    + "\n3. Triangle"
                    + "\n4. Square\n");
            ch = sc.nextInt();
            switch (ch) {
                case 1:
                    float l, b;
                    System.out.println("Enter length and breadth:");
                    l = sc.nextFloat();
                    b = sc.nextFloat();
                    new Area(l, b);
                    break;

                case 2:
                    double r;
                    System.out.println("Enter radius:");
                    r = sc.nextDouble();
                    new Area(r);
                    break;

                case 3:
                    double ba, h;
                    System.out.println("Enter base and height:");
                    ba = sc.nextDouble();
                    h = sc.nextDouble();
                    new Area(ba, h);
                    break;

                case 4:
                    float side;
                    System.out.println("Enter side:");
                    side = sc.nextFloat();
                    new Area(side);
                    break;
            }

            System.out.println("Calculate volume of:"
                    + "\n1. Sphere"
                    + "\n2. Cylinder"
                    + "\n3. Cube"
                    + "\n4. Cone\n");
            ch = sc.nextInt();
            switch (ch) {
                case 1:
                    double r;
                    System.out.println("Enter radius:");
                    r = sc.nextDouble();
                    new Volume(r);
                    break;

                case 2:
                    float ra, h;
                    System.out.println("Enter radius and height:");
                    ra = sc.nextFloat();
                    h = sc.nextFloat();
                    new Volume(ra, h);
                    break;

                case 3:
                    float side;
                    System.out.println("Enter side:");
                    side = sc.nextFloat();
                    new Volume(side);
                    break;

                case 4:
                    double radius, he;
                    System.out.println("Enter radius and height:");
                    radius = sc.nextDouble();
                    he = sc.nextDouble();
                    new Volume(radius, he);
                    break;
            }
        }
    }
}
