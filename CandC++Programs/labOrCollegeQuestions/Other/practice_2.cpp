#include<iostream>
using namespace std;
int main()
{
    int a ,b,c,t ,min;
    cout<<"enter values:";
    cin>>a>>b>>c;
    t = (a<b)?a:b;
    min = (t<c)?t:c;
    cout<<"the smallest number is:"<<min;
    return 0;
}