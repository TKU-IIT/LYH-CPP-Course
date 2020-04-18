#include <iostream>
using namespace std;
#define MAX_SIZE 16
class myCPPClass{
public:
	int getData();
	void getOperands();
	int doAdd();
	int doSub();
	int doProduct();
	int doDiv();
	void print();
public:
	int i;
    int sum;
	int gap;
	int product;
	int divides;
    int operand1;
    int operand2;
	int data[MAX_SIZE];
};
int myCPPClass::getData(){
	for(i = 0; i<MAX_SIZE; i++){
		cin >> data[i];
	}
}
void myCPPClass::getOperands(){
    cout << "Enter Two Numbers for myCPPObject. :";
    cin >> operand1 >> operand2;
}
int myCPPClass::doAdd(){
    sum = 0;
	sum = operand1 + operand2;
    return sum;
}
int myCPPClass::doSub(){
	gap = 0;
	gap = operand1 - operand2;
	return gap;
}
int myCPPClass::doProduct(){
	int product;
	product = operand1 * operand2;
	return product;
}
int myCPPClass::doDiv(){
	int divides;
	divides = operand1 / operand2;
	return divides;
}
void myCPPClass::print(){
		cout << operand1 << "\n" << operand2 << endl;
		for(i = 0; i<MAX_SIZE; i++){
			cout << data << endl;
		}
}