#include<iostream>
using namespace std;

void sort3P(float *x, float *y, float *z){
    int temp;
	for(int i = 1; i<=2; i++){
		if(x>y){
			temp = *y;
			*y = *x;
			*x = temp;
		}
		if(y>z){
			temp = *z;
			*z = *y;
			*y = *temp;
		}
	}
}

int main(){
    float x, y, z;
    cin >> x >> y >> z;
    sort3P(&a, &y, &z);
	cout << x << "\n" << y << "\n" << z << endl;
    return 0;
}
