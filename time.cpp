#include<iostream>
using namespace std;
class Time{
public:
Time(int, int, int);
Time();
void printTime();
int getHours();
int getMinutes();
int getSeconds();
void setHours(int hours);
void setMinutes(int minutes);
void setSeconds(int seconds);
inline bool operator>(Time &b);
inline bool operator<(Time &b);
inline Time operator+(Time &b);
private:
int hours = 0;
int minutes = 0;
int seconds = 0;
};
Time::Time(){}
Time::Time(int hours, int minutes, int seconds){
    if(hours>=0&&hours<=24)
    this->hours = hours;
    if(minutes>=0&&minutes<=59)
    this->minutes = minutes;
    if(seconds>=0&&seconds<=59)
    this->seconds = seconds;
}

void Time::printTime(){
    printf("%.2i:%.2i:%.2i", hours, minutes, seconds);
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

inline bool Time::operator>(Time &b){
    return this->hours > b.hours;
}

inline bool Time::operator<(Time &b){
    return this->hours < b.hours;
}

inline Time Time::operator+(Time &b){
    Time tmp;
    tmp.hours = this->hours + b.hours;
    tmp.minutes = this->minutes + b.minutes;
    tmp.seconds = this->seconds + b.seconds;
    int tmpsec=tmp.seconds, tmpmin=tmp.minutes, tmphr=tmp.hours;
    if(tmp.seconds>59 || tmp.minutes>59 || tmp.hours>23){
        tmp.seconds = tmp.seconds%60;
        tmp.minutes = (tmpsec/60 + tmp.minutes)%60;
        tmp.hours = tmpmin/60 + tmp.hours;
    }
    return tmp;
}

int main(){
    Time a(12,34,34), b(2,30,34);
    Time c = a + b;
    c.printTime();
    return 0;
}