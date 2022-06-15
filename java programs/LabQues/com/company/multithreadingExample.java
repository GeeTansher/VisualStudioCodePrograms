package com.company;

class Threading extends Thread{
    String str;
    int n=0;
    Threading(String str){
        this.str=str;

    }

    public void run() {
        try{
            while(n<10){
                n++;
                System.out.println(str+" "+n);
                Thread.sleep(500);
            }
        }
        catch (InterruptedException e){
            System.out.println(str+" interrupted");
        }
    }

}

public class multithreadingExample {
    public static void main(String[] args) {
        Threading t1 = new Threading("CSthread");
        Threading t2 = new Threading("ITthread");
        // Threading t3 = new Threading("IT");
        t1.start();
        // t3.start(); 
        t2.start();
    }
}