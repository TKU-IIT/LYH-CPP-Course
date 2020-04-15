#include <iostream>
using namespace std;

void Swap(int &, int &);
const int MaxSIZE = 10;

int main(void)
{
    int number[MaxSIZE] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

    for (int i = 0; i < MaxSIZE; i++)
        Swap(number[i], number[MaxSIZE - 1 - i]);
    for (int j = 0; j < MaxSIZE; j++)
        cout << number[j]<<'\t';
    cout<<endl;
    return 0;
}
void Swap(int &a, int &b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}