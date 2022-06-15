package com.company;

import java.util.Scanner;

class Employee {
    private String empName;
    private int empId;
    protected float basicSalary;

    protected void setInfo(String name, int id, float amount) {
        empId = id;
        empName = name;
        basicSalary = amount;
    }

    protected void displayInfo() {
        System.out.println("Employee details:\n"
                + "\nEmployee Name:" + empName
                + "\nEmployee Id:" + empId
                + "\nEmployee Basic Salary" + basicSalary);
    }
}

class Salary extends Employee {
    private float hra, da, pf, grossSalary;

    public void setInfo(String name, int id, float amount, float hra, float da, float pf) {
        setInfo(name, id, amount);
        this.hra = hra;
        this.da = da;
        this.pf = pf;
        grossCal();
    }

    private void grossCal() {
        grossSalary = basicSalary + hra + da + pf;
    }

    public void showEmpSlip() {
        displayInfo();
        System.out.println("Employee HRA:" + hra
                + "\nEmployee DA:" + da
                + "\nEmployee PF" + pf
                + "\nEmployee Gross Salary:" + grossSalary);
    }
}

public class salaryCalculator {
    public static void main(String[] args) {
        String name;
        int id;
        float amount, hra, da, pf;
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter details:");
            System.out.println("Enter Emp Name:");
            name = sc.nextLine();
            System.out.println("Enter Emp Id:");
            id = sc.nextInt();
            System.out.println("Enter Emp Basic Salary:");
            amount = sc.nextFloat();
            System.out.println("Enter Emp hra:");
            hra = sc.nextFloat();
            System.out.println("Enter Emp da:");
            da = sc.nextFloat();
            System.out.println("Enter Emp pf:");
            pf = sc.nextFloat();
        }
        Salary s = new Salary();
        s.setInfo(name, id, amount, hra, da, pf);
        s.showEmpSlip();
    }
}
