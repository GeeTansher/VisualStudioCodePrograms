//
// Source code recreated from a .class file by IntelliJ IDEA
// (powered by FernFlower decompiler)
//

package com.company;

import java.util.Random;
import java.util.Scanner;

class game {
    Random r = new Random();
    Scanner sc;
    private int rn;
    private int ui;
    private int nog;

    game() {
        this.sc = new Scanner(System.in);
        this.nog = 0;
        this.rn = this.r.nextInt(100);
    }

    public void userInput() {
        System.out.println("Enter the number: ");
        this.ui = this.sc.nextInt();
        this.setNog();
    }

    public void isNumberCorrect() {
        do {
            if (this.ui == this.rn) {
                System.out.println("You guessed the number in " + this.getNog() + " guesses.");
            } else if (this.ui < this.rn) {
                System.out.println("Try a bigger number");
                this.userInput();
            } else if (this.ui > this.rn) {
                System.out.println("Try a smaller number");
                this.userInput();
            } else {
                System.out.println("You entered something wrong.");
                if (this.nog != 0) {
                    --this.nog;
                }
            }
        } while (this.ui != this.rn);

        if (this.nog > 1 && this.ui == this.rn) {
            System.out.println("Congrats!!! You guessed the number in " + this.getNog() + " guesses.");
        }

    }

    public void setNog() {
        ++this.nog;
    }

    public int getNog() {
        return this.nog;
    }
}

public class guessTheNumber {
    public static void main(String[] args) {
        game g = new game();
        g.userInput();
        g.isNumberCorrect();
    }
}
