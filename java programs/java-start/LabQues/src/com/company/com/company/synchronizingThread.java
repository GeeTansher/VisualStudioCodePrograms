package com.company;

class Print{
    public void print(String str){
        System.out.println(str);
    }
    // synchronized public void print(String str){
    //     System.out.println(str);
    //     try {
    //         Thread.sleep(500);
    //     } catch (Exception e) {
    //         System.out.println("Error");
    //     }
    // }
    
}
class Threads extends Thread{
    String str;
    Print p;
    int n=0;
    Threads(String str,Print pr){
        this.str=str;
        p=pr;
        start();
    }

    public void run() {
        synchronized(p){
            try{    
                while(n<5){
                    n++;
                    Thread.sleep(500);
                    p.print(str);
                }
            }
            catch (InterruptedException e){
                System.out.println(str+" interrupted");
            }
        }
        System.out.println("Thread "+str+" exiting.");
    }
//     public void run() {
//         try{    
//             while(n<5){
//                 n++;
//                 p.print(str);
//                 Thread.sleep(500);
//             }
//         }
//         catch (InterruptedException e){
//             System.out.println(str+" interrupted");
//         }
//         System.out.println("Thread "+str+" exiting.");
//     }

}

public class synchronizingThread {
    public static void main(String[] args) {
        Print p = new Print();
        new Threads("CSthread",p);
        new Threads("ITthread",p);
        new Threads("OTHERthread",p);
    }
}
