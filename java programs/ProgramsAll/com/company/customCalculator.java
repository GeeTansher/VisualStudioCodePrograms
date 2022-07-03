package com.company;

import java.util.Scanner;
class myExp extends Exception{
    @Override
    public String toString() {
        return "Max Input Exception";
    }

    @Override
    public String getMessage() {
        return "Max Input Exception";
    }
}
class myException extends Exception {
    @Override
    public String toString() {
        return "Invalid input";
    }

    @Override
    public String getMessage() {
        return "Invalid input";
    }
}
public class customCalculator {
    public static void add(int f, int s){
        System.out.println("The sum is:" + (f+s));
    }

    public static void subtract(int f, int s){
        System.out.println("The subtraction is:" + (f-s));
    }

    public static void multiply(int f, int s) throws myExp {
        if (f > 7000 || s > 7000) {
//                        try {
            throw new myExp();
//                        } catch (Exception e) {
//                            System.out.println("ERROR:" + e.getMessage());
//                            e.printStackTrace();
//                        }
//                        break outer1;
//                        System.exit(0);
        }
        else {
            System.out.println("The multiplication is:" + (f * s));
        }
    }

    public static void divide(int f, int s) throws ArithmeticException{
        try {
            System.out.println("The division is:" + (f / s));
        }
        catch (ArithmeticException e) {
            System.out.println("ERROR:Divide by 0");
            e.printStackTrace();
            System.exit(0);
        }

    }

    public static void main(String[] args) throws myExp, myException {
        int f,s,c=1;
        String st;
        try (Scanner sc = new Scanner(System.in)) {
            //        name:
            while(c!=0) {
                System.out.println("Enter the first number:");
                f = sc.nextInt();
                System.out.println("Enter the second number:");
                s = sc.nextInt();
                if (f > 100000 || s > 100000) {
//                try {
                    throw new myExp();
//                } catch (Exception e) {                               // instead of these try and except statements
//                    System.out.println("ERROR:" + e.getMessage());    // for throwing every new exception
//                    e.printStackTrace();                              // write throws exception_name is main func declaration
//                    System.exit(0);
////                break name;
//                }
                }
                System.out.println("Enter the operation:\n1. +\n2. -\n3. *\n4. /");
                st = sc.next();
                switch (st) {
                    case "+": {
                        add(f, s);
                        break;
                    }
                    case "-": {
                        subtract(f, s);
                        break;
                    }
                    case "*": {
                        multiply(f, s);
                        break;
                    }
                    case "/": {
                        divide(f, s);
                        break;
                    }
                    default: {
//                    try {
                        throw new myException();
//                    } catch (Exception e) {
//                        System.out.println("Error:" + e);
//                        e.printStackTrace();
//                        System.exit(0);
//                    }
//                    break;
                    }
                }
//            name:
                System.out.println("Wanna exit the calculator(press 0):");
                c= sc.nextInt();
            }
        } catch (ArithmeticException e) {
            e.printStackTrace();
        }
    }
}