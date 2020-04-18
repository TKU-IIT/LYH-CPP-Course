#include <iostream>
using namespace std;

void sortNum (int &x, int &y, int &z){
	int lowest, middle, highest;
	if(x<y && y<z){
	lowest = x;
	middle = y;
	highest = z;
	}else if(y<x && x<z){
	lowest = y;
	middle = x;
	highest = z;
	}else if(z<y && y<x){
	lowest = z;
	middle = y;
	highest = x;
	}else if(z<x && x<y){
	lowest = z;
	middle = x;
	highest = y;
	}else if(y<z && z<x){
	lowest = y;
	middle = z;
	highest = x;
	}else if(x<z && z<y){
	lowest = x;
	middle = z;
	highest = y;
	}
}
int main(){
	int x, y, z;
	cin >> x >> y >> z;
	sortNum(x, y, z);
	cout << lowest << endl;
	cout << middle << endl;
	cout << highest << endl;
}

