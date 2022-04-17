package com.company;

import java.util.Scanner;

public class rotateMatrix {
    public static void main(String[] args) {
        int m;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number:");
        m=sc.nextInt();
        while(m<=2 || m>=10){
            System.out.println("You entered wrong input enter value of m again between 2 and 10:");
            m=sc.nextInt();
        }
        int[][] arr = new int[m][m];
        System.out.println("Enter data:");
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                arr[i][j]=sc.nextInt();
            }
        }
        System.out.println("The original array is:");
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                System.out.print(arr[i][j]);
            }
            System.out.println();
        }
        // transpose
        for(int i=0;i<m;i++){
            for(int j=i;j<m;j++){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
        // column swap of each row
        for(int i=0;i<m;i++){
            int l=0,r=m-1;
            while(l<r){
                int temp=arr[i][l];
                arr[i][l]=arr[i][r];
                arr[i][r]=temp;
                l++;r--;
            }
        }

        System.out.println("The rotated array is:");
        for(int i=0;i<m;i++){
            for(int j=0;j<m;j++){
                System.out.print(arr[i][j]);
            }
            System.out.println();
        }
        sc.close();
    }
}
