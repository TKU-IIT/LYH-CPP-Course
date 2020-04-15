//********************************************************************

#include <iostream>

const int ARRAY_SIZE = 12;
using namespace std;

class myArrayClass

{

public:
    void getData();
    void print();
    double findAver();
    double findMax();
    double findMin();

private:
    double data[ARRAY_SIZE];
    double max;
    double min;
    double aver;
    double sum;
    int size;
};

void myArrayClass::getData(){
    cout<<"Type your array in the size of "<<ARRAY_SIZE<<": "<<endl;
    for(int i = 0; i<ARRAY_SIZE;i++){
        
        cin >> data[i];
    }
}

void myArrayClass::print(){
    cout<<"The Array is: ";
    for(int i=0;i<ARRAY_SIZE;i++){
        cout << data[i]<<"  ";
    }
    cout<<endl;
}

double myArrayClass::findAver(){
    sum=0;
    aver=0;
    for(int i = 0;i<ARRAY_SIZE;i++){
        sum+=data[i];
    }
    aver = sum / (double)ARRAY_SIZE;
    return aver;
}

double myArrayClass::findMax(){
     max = data[0];
    for(int i =0;i<ARRAY_SIZE;i++){
        if(data[i]>max){
            max = data[i];
        }
    }
    return max;
}

double myArrayClass::findMin(){
     min = data[0];
    for(int i =0;i<ARRAY_SIZE;i++){
        if(data[i]<min){
            min = data[i];
        }
    }
    return min;
}

int main(){
    myArrayClass a;
    a.getData();
    a.print();
    cout<<"Average: "<<a.findAver()<<endl;
    cout<<"Maximum: "<<a.findMax()<<endl;
    cout<<"Minimum: "<<a.findMin()<<endl;
    return 0;
}