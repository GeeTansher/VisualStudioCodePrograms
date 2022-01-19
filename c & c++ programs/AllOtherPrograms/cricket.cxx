#include<iostream>
#include<conio>
#include<stdio>
#include<process>
#include<stdlib>
#include<dos>
#include<iomanip>
void header ()
{
cout<<"\n\n\t -----------------------------------------------------------";
cout<<setw(20)<<" \n\n\n\t\t\t SCORE CARD GENERATOR";
cout<<"\n\n Version 1.3";
cout<<"\n\n\t -----------------------------------------------------------";
}
struct cricinfo
{ int wickets[11];
int balls[11];
int runs[11];
char name[11][20];
}s;
float over ( int balls )
{ float k;
k=(balls/6);
return(k);
}

char a[11][20],b[11][20];
int wicket1[11],ball1[11],maiden1[11],run1[11],wicket2[11],ball2[11],maiden2[11],run2[11];
float eco1[11],eco2[11],over1[11],over2[11];
void bowl(char team1[],char team2[])
{
int i;
clrscr();
header();
cout<<"\n Enter The Details of"<<team1;
for(i=0;i<5;i++)
{
cout<<"\n\n Enter The Name of Bowler "<<i+1<<" ";
gets(a[i]);
cout<<"\n Wickets : ";
cin>>wicket1[i];
cout<<"\n Balls : ";
cin>>ball1[i];
cout<<"\n Maiden : ";
cin>>maiden1[i];
cout<<"\n Runs Given : ";
cin>>run1[i];
over1[i]=(over(ball1[i]));
eco1[i]=(run1[i]/over1[i]);
}
clrscr();
header();
cout<<"\n Enter The Details of"<<team2;
for(i=0;i<5;i++)
{
cout<<"\n\n Enter The Name of Bowler "<<i+1<<" ";
gets(b[i]);
cout<<"\n Wickets : ";
cin>>wicket2[i];
cout<<"\n Balls : ";
cin>>ball2[i];
cout<<"\n Maiden : ";
cin>>maiden2[i];
cout<<"\n Runs Given : ";
cin>>run2[i];
over2[i]=over(ball2[i]);
eco2[i]=(run2[i]/over2[i]);
}
}
float netrun(int ball,int runs)
{
float k,over;
over=ball/6;
k=(runs/over);
return(k);
}
float sr(int runs,int balls)
{
float k;
k=((runs/balls)*100);
return(k);
}
int bound(int four,int six)
{
int k;
k=four+six;
return(k);
}
int extras (int wides,int noballs,int byes)
{
int k;
k=(wides+noballs+byes);
return(k);
}
float str1[11],str2[11];
int runs1[11],balls1[11],fours1[11],six1[11],tot1=0,runs2[11],balls2[11],fours2[11],six2[11],tot2=0,wides1[11],noball1[11],byes1[11],wides2[11],noball2[11],byes2[11];
char x[11][20],y[11][20], team1[20],team2[20];
void player()
{
clrscr();
header();
int i;
cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t Enter Name Of Team 1 ( Team Who Won Toss ) : ";
gets(team1);
cout<<"\n\n Enter Name Of Team 2 : ";
gets(team2);
clrscr();
header();
cout<<"\n\n\t\t Enter The Details Of "<<team1<<":-";
for(i=0;i<11;i++)
{
cout<<"\n\n\n\t Enter Name Of Player Number "<<i+1<<" : ";
gets(x[i]);
cout<<"\n\t Enter Runs of "<<x[i]<<" : ";
cin>>runs1[i];
cout<<"\n\t Balls Faced by "<<x[i]<<" : ";
cin>>balls1[i];
cout<<"\n\t Fours"<<" : ";
cin>>fours1[i];
cout<<"\n\t Six"<<" : ";
cin>>six1[i];

str1[i]=sr(balls1[i],runs1[i]);
tot1+=runs1[i];
}
clrscr();
header();
cout<<"\n\n\t\t Enter The Details Of "<<team2;
for(i=0;i<11;i++)
{
cout<<"\n\n\n\t Enter Name Of Player Number "<<i+1<<" : ";
gets(y[i]);
cout<<"\n \tEnter Runs of "<<y[i]<<" : ";
cin>>runs2[i];
cout<<"\n\t Balls Faced by "<<y[i]<<" : ";
cin>>balls2[i];
cout<<"\n\t Fours"<<" : ";
cin>>fours2[i];
cout<<"\n\t Six"<<" : ";
cin>>six2[i];
str2[i]=sr(balls2[i],runs2[i]);
tot2+=runs1[i];
}
bowl(team1,team2);
}
void display();
void main()
{
int i;
char ch;
clrscr();
textcolor(YELLOW);
cout<<"\n\n\n\t ----------------------------------------------------------";
cout<<setw(20)<<"\n\n\t\t =====================";
cout<<setw(20)<<"\n\n\t\t CMK Creations ";
cout<<setw(20)<<"\n\n\t\t ===================== ";
cout<<"\n\n\t -----------------------------------------------------------";
cout<<setw(20)<<" \n\n\n\n\n\n\n\n\n\n\n\t\t\t SCORE CARD GENERATOR";
cout<<"\n\n\n Version 1.3";

cout<<"\n\n\n\n\n\n\n\n\n\n";
cout<<"\n\n\n\t\t\t";
cout<<" Initalizing Score Card...";
cout<<"\n\n\t\t\t\t |";
for(i=0;i<8;i++)
{
sleep(1);
cout<<"-";
}
cout<<"|";
delay(500);
cout<<"\n\n\n\n\n\n\t\t\t";
cout<<" Initlaized.....\n";

cout<<"\n\n\t\t Press 'Y' To Continue And 'N' To Exit : ";
cin>>ch;

if ( ch=='y'||ch=='Y')
player();
else if ( ch=='n'||ch=='N')
exit(0);
clrscr();
getch();
}
void display()
{

int i,k,win;
char next;
k=random(11);
if(tot1>tot2)
win=0;
else
win=1;
clrscr();
header();
cout<<"\n<<<<<<"<<team1<<"V"<<team2<<">>>>>>>>>>";
cout<<"\n Toss : "<<team1<<"Won Toss and Elected Batting ";
if(win==0)
cout<<"\n Result : "<< team1<<"wins";
else
cout<<"\n Result : "<< team2<<"wins";
cout<<"\n Man Of The Match "<<((x[k]||y[k])||(a[k]||b[k]));
cout<<"\n<<<<<<"<<team1<<">>>>>>>";
cout<<"\n\n Name Runs Balls 4s 6s SR \n\n\n ";
for(i=0;i<11;i++)
{
cout<<"\n"<<x[i]<<" "<<runs1[i]<<" "<<balls1[i]<<" "<<fours1[i]<<" "<<six1[i]<<" "<<str1[i];
cout<<"\n";
}
cout<<"\n Bowling";
cout<<"\n\n Bowler Over Maiden Wickets Economy";
for(i=0;i<11;i++)
{
cout<<b[i]<<" "<<over2[i]<<" "<<maiden2[i]<<" "<<wicket2[i]<<" "<<eco1[i];
cout<<"\n\n";
}
cout<<"\n\n Enter N to continue to next page";
cin>>next;
if(next=='n'||next=='N')
cout<<"\n<<<<<<"<<team2<<">>>>>>>";
cout<<"\n\n Name Runs Balls 4s 6s SR \n\n\n ";
for(i=0;i<11;i++)
{
cout<<"\n"<<y[i]<<" "<<runs2[i]<<" "<<balls2[i]<<" "<<fours2[i]<<" "<<six2[i]<<" "<<str2[i];
cout<<"\n";
}
cout<<"\n Bowling";
cout<<"\n\n Bowler Over Maiden Wickets Economy : ";
for(i=0;i<11;i++)
{
cout<<a[i]<<" "<<over1[i]<<" "<<maiden1[i]<<" "<<wicket1[i]<<" "<<eco2[i];
cout<<"\n\n";
}
getch();
}