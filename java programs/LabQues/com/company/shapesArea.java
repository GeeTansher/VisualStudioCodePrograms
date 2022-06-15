package com.company;

import java.text.DecimalFormat;

abstract class Shape {
    abstract void rectangleArea(float l, float b);

    abstract void squareArea(float s);

    abstract void circleArea(float r);
}

class AreaCal extends Shape {
    private static final DecimalFormat df = new DecimalFormat("0.000");

    @Override
    void rectangleArea(float l, float b) {
        System.out.println("The area if rectangle is:" + df.format(l * b));
    }

    @Override
    void squareArea(float s) {
        System.out.println("The are of square is:" + df.format(s * s));
    }

    @Override
    void circleArea(float r) {
        System.out.println("The area of circle is:" + df.format(Math.PI * r * r));
    }
}

public class shapesArea {
    public static void main(String[] args) {
        AreaCal a = new AreaCal();
        a.rectangleArea((float) 34.2, (float) 45.5);
        a.squareArea((float) 53.5);
        a.circleArea((float) 43.2);
    }
}
