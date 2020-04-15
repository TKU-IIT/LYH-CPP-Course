#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int a[10];
    for(int i =0; i<9;i++)
        a[i] =   rand() %7+1;
    return 0;
}