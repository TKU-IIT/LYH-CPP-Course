#include<iostream>
using namespace std;
int main(){
    int number, i =1, factorial = 1;
    cout<<"Enter a positive integer: ";
    cin >> number;
    for(;i<=number;++i){
        factorial *=i;
    }
    cout<<"Factorial of";
    cout<<number<<"="<<factorial;
    return 0;
}