#include <iostream>
using namespace std;
class time{
	private:
	int hours,minutes,seconds;

	public:

	time(){
		hours = minutes = seconds = 0;
	}
	time(int h, int m, int s){
		hours = h;
		minutes = m;
		seconds = s;
	}
	void showTime(){
		cout<< hours << ':' << minutes << ':' <<seconds;
	}
	void addTime(time x, time y){
		seconds = x.seconds + y.seconds;
		if(seconds>59){
			seconds-=60;
			minutes++;
		}
		minutes += x.minutes + y.minutes;
		if(minutes>59){
			minutes-=60;
			hours++;
		}
		hours+=x.hours+y.hours;
	}
};

int main()
{
	time a(10,23,45), b(4,25,15);
	time c;
	c.addTime(a,b);
    cout<<"First time:";a.showTime();
    cout<<"\nSecond Time";b.showTime();
    cout<<"\nAdded Time:";c.showTime();
	return 0;
}
