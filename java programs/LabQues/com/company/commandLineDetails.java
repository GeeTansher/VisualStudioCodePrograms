package com.company;

public class commandLineDetails{
    public static void main(String[] args) {
        String name,course;
        int rollNo,semester;
        name = args[0];
        course = args[1];
        rollNo = Integer.parseInt(args[2]);
        semester = Integer.parseInt(args[3]);

        System.out.println("The details are:");
        System.out.println("Name: " + name
                            + "\nCourse: "+course
                            + "\nUniversity roll no.: "+rollNo
                            + "\nSemester: "+ semester);
    }
}