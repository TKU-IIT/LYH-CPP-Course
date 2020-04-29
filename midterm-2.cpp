#include <iostream>
#include <cstring>
using namespace std;
class CPPCourse
{
public:
    CPPCourse();
    CPPCourse(double score, string instructor);
    void setScore(double s);
    void setInstructor(string ins_name);
    string getInstructor();
    char* getName();
    int getHours();
    double getScore();
    void print();

private:
    char* course_name;
    string instructor;
    int hoursPerWeek;
    double score;
};
CPPCourse::CPPCourse()
{
    course_name = "Advanced Programming";
    hoursPerWeek = 3;
}
CPPCourse::CPPCourse(double score, string instructor)
{
    course_name = "Advanced Programming";
    hoursPerWeek = 3;
    this->score=score;
    this->instructor = instructor;
}
void CPPCourse::setScore(double s)
{
    score = s;
}
void CPPCourse::setInstructor(string ins_name)
{
    instructor = ins_name;
}
string CPPCourse::getInstructor()
{
    return instructor;
}
char* CPPCourse::getName()
{
    return course_name;
}
int CPPCourse::getHours()
{
    return hoursPerWeek;
}
double CPPCourse::getScore()
{
    return score;
}
void CPPCourse::print()
{
    cout<<"Hours per week: "<<hoursPerWeek<<endl;
    cout<<"Course Name: "<<course_name<<endl;
    cout<<"Instructor: "<<instructor<<endl;
    cout<<"Score: "<<score<<endl;
}
int main(){
    CPPCourse a;
    a.print();
    CPPCourse b(100.0, "Homer");
    b.print();
    return 0;
}