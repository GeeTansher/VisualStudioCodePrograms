package com.company;
class substring{
    private String s;
    public substring(String s){
        this.s=s;
    }
    public void generate(){
        for (int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                if((j-i)%2==0){
                    System.out.println(s.substring(i,j+1));
                }
            }
        }
    }
}
public class possibleSubstringOddLength {
    public static void main(String[] args) {
        String str="Aryan";
        substring s= new substring(str);
        s.generate();
    }
}
