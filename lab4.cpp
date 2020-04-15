#include<iostream>
using namespace std;
class Tempature{
    public :
        double Kelvin, Celsius, Fahrenheit;
        void setTempKelvin();
        void setTempCelsius();
        void setTempFahrenheit();
};


void Tempature::setTempKelvin(void){
    Kelvin = Celsius + 273.15;
}
void Tempature::setTempCelsius(void){
    Celsius = (5/9) *(Fahrenheit - 32);
}
void Tempature::setTempFahrenheit(void){
    Fahrenheit = (9/5) * (Celsius) + 32;
}
int main(int argc, const char** argv) {
    Tempature a;
    a.Celsius = 20;
    cout<<a.Celsius<<"\t";
    a.setTempKelvin();
    cout<<a.Kelvin<<"\t";
    a.setTempFahrenheit();
    cout<<a.Fahrenheit<<"\n";
    return 0;
}