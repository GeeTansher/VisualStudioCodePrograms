package com.company;

import java.util.Scanner;

class Student {
    protected int rollNo, age;
    protected String name;
    protected int[] marks = new int[4];

    public void readInfo() {
        Scanner sc = new Scanner(System.in);
        rollNo = sc.nextInt();
        age = sc.nextInt();
        sc.nextLine();
        name = sc.nextLine();
        for (int i = 0; i < 4; i++) {
            marks[i] = sc.nextInt();
        }
        sc.close();
    }
}

interface info {
    public void printInfo();
}

interface marks {
    public void showMarks();
}

class Result extends Student implements info, marks {

    @Override
    public void showMarks() {
        for (int i = 0; i < 4; i++) {
            System.out.println("Marks " + (i + 1) + ": " + marks[i]);
        }
    }

    @Override
    public void printInfo() {
        System.out.println("The student info is:\n");
        System.out.println("Roll No.: " + rollNo + "\n"
                + "Age: " + age + "\n"
                + "Name: " + name);
    }

}

public class ScenarioStudent {
    public static void main(String[] args) {
        Result result = new Result();
        System.out.println("Enter details:");
        result.readInfo();
        result.printInfo();
        result.showMarks();
    }
}
