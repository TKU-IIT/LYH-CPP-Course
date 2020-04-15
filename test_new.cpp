#include<iostream>
using namespace std;


int main(int argc, char const *argv[])
{
    int * a = new int[8];
    a[0]=10;
    a[1]=1;
    a[7]=4;

    for(int i = 0;i<8;i++)
        cout<<a[i]<<endl;
    return 0;
}
