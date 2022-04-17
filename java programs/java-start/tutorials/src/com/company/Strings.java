//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package com.company;

import java.util.Arrays;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Strings {
    public Strings() {
    }

    public static void main(String[] args) {
        System.out.println("===== String methods =====");
        System.out.println();
        String s = " hello ";
        System.out.println("s.length(): " + s.length());
        System.out.println("s.contains(\"he\"): " + s.contains("he"));
        System.out.println("s.isEmpty: " + s.isEmpty());
        System.out.println("s.toUpperCase(): " + s.toUpperCase());
        System.out.println("s.startsWith(\"h\"): " + s.startsWith("h"));
        System.out.println("s.endsWith(\" \"): " + s.endsWith(" "));
        System.out.println("s.replace(\"ll\", \"LL\"): " + s.replace("ll", "LL"));
        System.out.println("s.trim(): " + s.trim());
        System.out.println("s.substring(0, 3): " + s.substring(0, 3));
        System.out.println("Arrays.toString(s.getBytes()): " + Arrays.toString(s.getBytes()));
        System.out.println("Arrays.toString(s.toCharArray()): " + Arrays.toString(s.toCharArray()));
        System.out.println("s.charAt(1): " + s.charAt(1));
        System.out.println("Arrays.toString(s.split(\"e\")): " + Arrays.toString(s.split("e")));
        System.out.println(s);
        System.out.println("===== String comparison =====");
        System.out.println();
        String s1 = " hello ";
        String s2 = " hello ";
        System.out.println("s == s2: " + (s1 == s2));
        String s3 = new String(" hello ");
        System.out.println("s == s3: " + (s1 == s3));
        System.out.println("s.equals(s3): " + s1.equals(s3));
        System.out.println("s == s3.intern(): " + (s1 == s3.intern()));
        String firstName = "Andrii";
        String firstName2 = "andrii";
        System.out.println("firstName.equals(firstName2): " + firstName.equals(firstName2));
        System.out.println("firstName.equalsIgnoreCase(firstName2): " + firstName.equalsIgnoreCase(firstName2));
        System.out.println("===== Escape sequences =====");
        System.out.println();
        System.out.println("My favourite book is \"The one thing\" by Gary Keller.");
        System.out.println("Path to the source code: D:\\Java\\sources");
        System.out.println("some text line 1\nsome text line 2");
        System.out.println("Unicode characters, © IT-Bulls.com");
        System.out.println("===== String formatting =====");
        System.out.println();
        String firstName1 = "Andrii";
        String greetingsTemplate = "Hello, dear %s! Good %s!";
        String morning = "morning";
        String afternoon = "afternoon";
        String evening = "evening";
        String formattedString = String.format(greetingsTemplate, firstName1, morning);
        System.out.println(formattedString);
        System.out.printf("You have %d computers available at store\n", 10);
        System.out.println("===== Regular expressions =====");
        System.out.println();
        String gmailPattern = "[a-zA-Z-\\d]+@gmail\\.com";
        Pattern p = Pattern.compile(gmailPattern);
        String sampleText = "Some random text that contains gmail addresses like this one some-email@gmail.com. And some other random text.";
        Matcher m = p.matcher(sampleText);
        m.find();
        String gmailAddress = m.group();
        System.out.println(gmailAddress);
        String sampleText2 = "There are three sentences in this string. Are you sure? Yes!";
        String[] sentences = sampleText2.split("[\\.!?]");
        System.out.println(Arrays.toString(sentences));
    }
}
