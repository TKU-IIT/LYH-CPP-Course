#include <iostream>

using namespace std;

int main()
{
	int score;
	cout << "Enter score : ";
	cin >> score;
	if(60>score){
		cout << "your rank is F." << endl;
	}else if(70>score && score>=60){
		cout << "your rank is C." << endl;
	}else if(80>score && score>=70){
		cout << "your rank is B." << endl;
	}else if(100>score && score>=80){
		cout << "your rank is A." << endl;
	}
	return 0;
}