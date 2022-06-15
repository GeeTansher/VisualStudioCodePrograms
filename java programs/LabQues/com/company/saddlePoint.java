package com.company;

import java.util.Scanner;

public class saddlePoint {
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            System.out.println("Enter no of rows and column:");
            int n=sc.nextInt();
            int m=sc.nextInt();
            Integer[][] ar=new Integer[n][m];
            int[] saddle = new int[Math.max(m,n)];
            int k=0;
            System.out.println("Enter data:");
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    ar[i][j]=sc.nextInt();
                }
            }
            // saddle point smallest in its row but largest in its column.
            for(int i=0;i<n;i++){
                int rm=0;
                for(int j=1;j<m;j++){
                    if(ar[i][j]<ar[i][rm]){
                        rm=j;
                    }
                }
                // now ar[i][rm] is the lowest in ith row
                int j;
                for(j=1;j<n;j++){
                    if(ar[j][rm]>ar[i][rm])
                    break;
                }
                // System.out.println(rm+" "+max);
                if(j==n){
                    saddle[k]=ar[i][rm];
                    k++;
                }
            }
            System.out.println("Saddle Points are:");
            for(int i=0;i<k;i++){
                System.out.println(saddle[i]+" ");
            }
        }
    }
}