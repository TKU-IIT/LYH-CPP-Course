#include<iostream>
#include<cstring>
using namespace std;
class student{
	public:
	void print(void);
	void setID(int ID);
	void setName(char *N);
	int getID();
	double getscore();
	const char* getName() const;
	private:
	int StudentID = 123456;
	char name[10] = {'R', 'y', 'a', 'n', '\0'};
	double average = 60.0;
	double score = 60;
};
void student::setID(int ID){
	StudentID = ID;
}
void student::setName(char *N){
	strcpy(name, N);
}
int student::getID(){
	return StudentID;
}
const char* student::getName() const{
	return name;
}
double student::getscore(){
    return score;
}
void student::print(){
	cout << "Student name: " << name << endl;
	cout << "Student ID: " << StudentID << endl;
	cout << "Average grade points: " << average << endl;
}
int main(){
	student test1, test2;
	
	test1.setID(234567);
	test1.setName("Ben");
	test1.print();
	
	test2.getID();
	test2.getName();
	test2.print();
	
	return 0;
}