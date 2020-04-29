#include<iostream>
using namespace std;

class Time{
    public:
    Time(int h, int m, int s);
    Time();
    int getHour();
    int getMinute();
    int getSecond();
    void setHour(int h);
    void setMinute(int m);
    void setSecond(int s);
    void setTime(int h, int m, int s);
    void print();
    void nextSecond();
    private:
    int hour = 0;
    int minute = 0;
    int second = 0;
};
Time::Time(){}
Time::Time(int h, int m, int s){
    if(h>=0&&h<=23)
        hour = h;
    if(m>=0&&m<=59)
        minute= m;
    if(s>=0&&s<=59)
        second = s;
}
int Time::getHour(){
    return hour;
}
int Time::getMinute(){
    return minute;
}
int Time::getSecond(){
    return second;
}
void Time::setHour(int h){
    if(h>=0&&h<=23)
        hour = h;
    else
    {
        cerr<<"invalid value"<<endl;
    }
    
}
void Time::setMinute(int m){
    if(m>=0&&m<=59){
        minute= m;
    }else
    {
        cerr<<"invalid value"<<endl;
    }
}
void Time::setSecond(int s){
    if(s>=0&&s<=59)
        second = s;
        else
    {
        cerr<<"invalid value"<<endl;
    }
}
void Time::setTime(int h, int m, int s){
    if(h>=0&&h<=23)
        hour = h;
    if(m>=0&&m<=59)
        minute= m;
    if(s>=0&&s<=59)
        second = s;
}
void Time::print(){
    printf("%.2i:%.2i:%.2i\n",hour%100, minute%100,second%100);
}

int main(){
    Time t1(2,20,23);
    t1.print();
    Time t2;
    t2.setTime(1,2,3);
    t2.print();
    Time t3;
    t3.setHour(100);
    t3.print();
    return 0;
}