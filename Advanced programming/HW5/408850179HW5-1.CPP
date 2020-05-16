#include<iostream>

using namespace std;

class Circle{
	public:
		Circle();
		Circle(double r);
		~Circle();
		void setradius(double r);
		double getradius();
		double getarea();
		double getcircum();
		double getdiameter();
		void print();
		inline Circle operator+(Circle &a);
	private:
		double radius;
};
const double PI = 3.14159;
Circle::Circle(){
    radius = 1.0;
}
Circle::Circle(double r){
	if(r<=0){
		radius = 1.0;
	}else{
		radius = r;
	}
}
Circle::~Circle(){}
void Circle::setradius(double r){
	radius = r;
}
double Circle::getradius(){
	return radius;
}
double Circle::getarea(){
	return (PI * (radius*radius));
}
double Circle::getcircum(){
	return (2 * PI * radius);
}
double Circle::getdiameter(){
	return (2 * radius);
}
void Circle::print(){
	cout << "Radius = " << radius << "\n"
	<< "Diameter = " << getdiameter() << "\n"
	<< "Area = " << getarea() << "\n"
	<< "Circumference = " << getcircum() << endl;
}
inline Circle Circle::operator+(Circle &a){
	Circle sum;
	sum.radius = this->radius + a.radius;
	return sum;
}

int main(){
	Circle test1(2.0), test2(3.0);
	Circle test3 = test1 + test2;
	test3.print();
	return 0;
}
