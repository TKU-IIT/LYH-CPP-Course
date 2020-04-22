#include <iostream>
#include<cstring>
using namespace std;

class Employee{
	public:
		//printer
		void print();
		Employee(string name, int year, string address);
		//setter
		void setName(string name);
		void setYear(int year);
		void setSalary(int salary);
		void setAddr(string address);
		//getter
		string getName();
		int getYear();
		string getAddr();
		int getSal();
	private:
		string name;
		int year;
		int salary;
		string address;
};
//setter
void Employee::setName(string name){
	this->name = name;
}
void Employee::setYear(int year){
	this->year = year;
}
void Employee::setSalary(int salary){
	this->salary = salary;
}
void Employee::setAddr(string address){
	this->address = address;
}
//getter
string Employee::getName(){
	return name;
}
int Employee::getYear(){
	return year;
}
int Employee::getSal(){
	return salary;
}
string Employee::getAddr(){
	return address;
}
Employee::Employee(string name, int year, string address){
	this->name =name;
	this->year = year;
	this->salary = 20000;
	this->address = address;
}
/*
Robert        1994               180_1-Rd. LinWei
Sam           2000               180_2-Rd. LinWei
John          1999                180_3-Rd. LinWei
*/
void Employee::print(){
	cout << this->name << '\t' << this->year << '\t' << this->address<<endl;
}

int main(){
	Employee a("Robert", 1994, "180_1-Rd. Linwei"),b("Sam",2000,"180_2-Rd. LinWei"),c("John", 1999, "180_3-Rd. LinWei");
	
	a.print();
	b.print();
	c.print();
	return 0;
}
