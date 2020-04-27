#include <iostream>

using namespace std;
class Circle{
public:
    Circle(double);
    ~Circle();
    void setRadius(double);
    double getRadius();
    void cal();
    double getArea();
    double getPerimeter();
    double getDiameter();
private:
    double const PI = 3.1415926535;
    double radius;
    double area;
    double perimeter;
    double diameter;
};
//Constructor
Circle::Circle(double radius){
    this->radius = radius;
}
//Radius Mutator
void Circle::setRadius(double radius){
    this->radius = radius;
}
//Radius Accessor
double Circle::getRadius(){
    return this->radius;
}
//
double Circle::getArea(){
    this->area = PI * this->radius * this->radius;
    return PI * this->radius * this->radius;
}
//
double Circle::getPerimeter(){
    this->perimeter = 2 * PI * this->radius;
    return 2 * PI * this->radius;
}
//
double Circle::getDiameter(){
    this->diameter = 2 * this->radius;
    return 2 * this->radius;
}

/*
Given the following class definition,
how would you declare an object of the class,
so that the object automatically called the default constructor:

Ans. ItemClass myItem;
*/
class ItemClass{
public:
    ItemClass();
    ItemClass(float);
    float getCost();
    void setCost();
private:
    float cost;
};

int main()
{
    //Initialize 10 elements of integer array counts to zero
    int counts[10] = {0};

    //Add 1 to each of the 15 elements of integer array bonus
    int bonus[15];
    for(int i = 0; i<15;i++)
        bonus[i]++;

    //Read 12 Values for double array MTemp from the keyboard.
    double MTemp[12];
    for(int i = 0;i < 12; i++)
        cin >> MTemp[i];

    //Print 5 Values of integer array bestScores
    int bestScores[10]={0};
    for(int i = 0; i < 5; i++)
        cout << bestScores[i];

    //A constructor doesn't return anything.

    //A constructor called whenever an object is declared

    //If you have a class named PersonClass,
    //which of the following correctly declare a constructor in the definition.
    // Ans. PersonClass();

    //Examination of circle object
    Circle c = new Circle();
    c.setRadius(100);
    cout << "Area: " << c.getArea() << endl;
    cout << "Perimeter: " << c.getPerimeter() <<endl;
    return 0;
}
