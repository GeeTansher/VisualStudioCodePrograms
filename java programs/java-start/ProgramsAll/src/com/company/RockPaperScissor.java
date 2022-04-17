package com.company;

import java.util.Random;
import java.util.Scanner;

public class RockPaperScissor {
    public static void main(String[] args) {
        Random r = new Random();
        Scanner sc = new Scanner(System.in);
        String[] ar={"R","S","P"};
        System.out.println("Enter a choice from R,P,S");
        String u = sc.next();
        u=u.toUpperCase();
        String c = ar[r.nextInt(2)];
        if(u.equals(c))
        {
            System.out.println("Draw");
        }
        else if(u.equals("R")&&c.equals("S")||u.equals("S")&&c.equals("P")||u.equals("P")&&c.equals("R"))
        {
            System.out.println("You win");
        }
        else
        {
            System.out.println("Comp win");
        }
        System.out.println("Comp choice: "+ c);
    }


}