#include<iostream>

using namespace std;

class Time{
	private:
		int hours = 0;
		int minutes = 0;
		int seconds = 0;
	public:
		Time();
		Time(int, int, int);
		int getHours();
		int getMinutes();
		int getSeconds();
		void setHours(int hours);
		void setMinutes(int minutes);
		void setSeconds(int seconds);
		void printTime();
		inline bool operator>(Time &a);
		inline bool operator<(Time &a);
		inline Time operator+(Time &a);
};
Time::Time(){}
Time::Time(int hours, int minutes, int seconds){
    if(hours>=0&&hours<=24){
		this->hours = hours;
	}
    if(minutes>=0&&minutes<=59){
		this->minutes = minutes;
	}
    if(seconds>=0&&seconds<=59){
		this->seconds = seconds;
	}
}
void Time::setHours(int hours){
	if(hours>=0&&hours<=23)
		this->hours = hours;
}
void Time::setMinutes(int minutes){
	if(minutes>=0&&minutes<=59)
		this->minutes = minutes;
}
void Time::setSeconds(int seconds){
	if(seconds>=0&&seconds<=59)
		this->seconds = seconds;
}
int Time::getHours(){
	return this->hours;
}
int Time::getMinutes(){
	return this->minutes;
}
int Time::getSeconds(){
	return this->seconds;
}
void Time::printTime(){
	printf("%.2i:%.2i:%.2i", hours, minutes, seconds);
}
inline bool Time::operator>(Time &a){
	return this->hours > a.hours;
}
inline bool Time::operator<(Time &a){
	return this->hours < a.hours;
}
inline Time Time::operator+(Time &a){
    Time tmp;
    tmp.hours = this->hours + a.hours;
    tmp.minutes = this->minutes + a.minutes;
    tmp.seconds = this->seconds + a.seconds;
    int tmpsec=tmp.seconds, tmpmin=tmp.minutes, tmphr=tmp.hours;
    if(tmp.seconds>59 || tmp.minutes>59 || tmp.hours>23){
        tmp.seconds = tmp.seconds%60;
        tmp.minutes = (tmpsec/60 + tmp.minutes)%60;
        tmp.hours = tmpmin/60 + tmp.hours;
    }
    return tmp;
}
int main(){
    Time test1(12,00,00), test2(5,10,55);
    Time test3 = test1 + test2;
    test3.printTime();
    return 0;
}