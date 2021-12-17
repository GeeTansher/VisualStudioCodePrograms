#include<iostream>
using namespace std;
 int main()
 {
     int a ,b ,c;
     cout<<"enter values:";
     cin>>a>>b>>c;
     if(a<b)
     {
         if(a<c)
         {
             cout<<"the smallest number is:"<<a;
         }
         else
         {
             cout<<"the smallest number is:"<<c;
         }
         
     }
     else
     {
         cout<<"the smallest number is:"<<b;
     }
     
     return 0;
     
 }