package com.company;

import java.text.DecimalFormat;
import java.util.Scanner;

abstract class Temperature {
    protected static final DecimalFormat df = new DecimalFormat("0.000");
    public double temp;

    void setTempData(double temp) {
        this.temp = temp;
    }

    abstract void changeTemp();
}

class fahrenheit extends Temperature {
    double ctemp;

    @Override
    void changeTemp() {
        ctemp = (5 * (temp - 32)) / 9;
        System.out.println("The temperature in celsius is:" + df.format(ctemp));
    }
}

class celsius extends Temperature {
    double ftemp;

    @Override
    void changeTemp() {
        ftemp = (9 * (temp + 32)) / 5;
        System.out.println("The temperature in celsius is:" + df.format(ftemp));
    }
}

public class TemperatureConvert {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter the temp to be converted:");
            double temp = sc.nextDouble();
            int ch;
            System.out.println("In which you want the temp to be converted in:"
                    + "\n1. Celsius"
                    + "\n2. Fahrenheit");
            ch = sc.nextInt();
            if (ch == 1) {
                Temperature t = new fahrenheit();
                t.setTempData(temp);
                t.changeTemp();
            } else if (ch == 2) {
                Temperature t = new celsius();
                t.setTempData(temp);
                t.changeTemp();
            }
        }
    }
}
