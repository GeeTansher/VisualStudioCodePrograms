package com.company;

import java.util.Scanner;

class Area{
    public Area(float l, float b){

    }
    public Area(float side){

    }
    public Area(double radius){

    }
    public Area(double b, double h){

    }
}

class Volume{
    public Volume(float r, float h){

    }
    public Volume(float side){

    }
    public Volume(double radius){

    }
    public Volume(double r, double h){
        
    }
}

public class areaVolume {
    public static void main(String[] args) {
        int ch;
        Scanner sc=new Scanner(System.in);
        System.out.println("Calculate area of:"
                            + "\n1. Rectangle"
                            + "\n2. Circle"
                            + "\n3. Triangle"
                            + "\n4. Square\n");
        ch=sc.nextInt();
        switch(ch){
            case 1:
            float l,b;
            System.out.println("Enter length and breadth:");
            l=sc.nextFloat();
            b=sc.nextFloat();
            new Area(l,b);

            case 2:
            double r;
            System.out.println("Enter radius:");
            r=sc.nextDouble();
            new Area(r);

            case 3:
            double ba,h;
            System.out.println("Enter base and height:");
            ba=sc.nextDouble();
            h=sc.nextDouble();
            new Area(ba,h);

            case 4:
            float side;
            System.out.println("Enter side:");
            side=sc.nextFloat();
            new Area(side);
        }
        
        System.out.println("Calculate volume of:"
                            + "\n1. Sphere"
                            + "\n2. Cylinder"
                            + "\n3. Cube"
                            + "\n4. Cone\n");
        ch=sc.nextInt();
        switch(ch){
            case 1:
            double r;
            System.out.println("Enter radius:");
            r=sc.nextDouble();
            new Volume(r);

            case 2:
            float ra,h;
            System.out.println("Enter radius and height:");
            ra=sc.nextFloat();
            h=sc.nextFloat();
            new Volume(ra,h);

            case 3:
            float side;
            System.out.println("Enter side:");
            side=sc.nextFloat();
            new Volume(side);

            case 4:
            double radius,he;
            System.out.println("Enter radius and height:");
            radius=sc.nextDouble();
            he=sc.nextDouble();
            new Volume(radius,he);
        }
    }
}
