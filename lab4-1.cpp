#include<iostream>
using namespace std;
class student{
    public:
        string stuID = "123456";
        void print(void);
        void setScore(double a);
    private:
        double avr = 60.0;
};
void student::setScore(double a){
    avr = a;
}
void student::print(void){
    cout<<"Student ID: "<<stuID<<endl;
    cout<<"Average Grade Points: "<<avr<<endl;
}
int main(int argc, char const *argv[])
{
    student a,b;
    a.stuID="999999";
    a.setScore(78.5);
    a.print();
    b.stuID="000000";
    b.setScore(85.5);
    b.print();
    return 0;
}
