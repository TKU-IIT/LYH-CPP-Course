#include<iostream>
#include<cstring>
using namespace std;
class DayOfYear{
public:
	void print(char* title);
	int getMonth();
	int getDay();
	void setMonth(int);
	void setDay(int);
private:
	int month;
	int day;
};
void DayOfYear::print(char* title){
	cout << title << " Month = " << month << ", Day = " << day << endl ;
}
int DayOfYear::getMonth(){
	return month;
}
int DayOfYear::getDay(){
	return day;
}
void DayOfYear::setMonth( int m){
	month = m;
}
void DayOfYear::setDay(int d){
	day = d;
}
int main(){
	DayOfYear holiday, birthDay;
	DayOfYear *ptr 

    cout << "Hello World!" << endl;
    holiday.setMonth(3);
    holiday.setDay(25);
    holiday.print("Holiday:");

    birthDay.setMonth(8);
    birthDay.setDay(20);
    birthDay.print("My BirthDay :");
    ptr = &holiday;
    ptr->print("PTR day :");

    return 0;
}
