#include<iostream>

using namespace std;
class Temperature{
	public:
		void setTempKelvin();
		void setTempFahrenheit();
		void setTempCelsius();
		double K;
		double F;
		double C;
};
void Temperature::setTempKelvin(){
	K = C + 273.15;
}
void Temperature::setTempCelsius(){
	C = (5 * (F - 32)/9);
}
void Temperature::setTempFahrenheit(){
	F = (C*(9/5))+32;
}