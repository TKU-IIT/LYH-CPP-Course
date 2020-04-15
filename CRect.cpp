#include<iostream>
using namespace std;
class CRectangle{
	public:
		CRectangle();
		CRectangle(int len, int w);
		void setLength(int len);
		void setWidth(int w);
		int getLength();
		int getWidth();
		int getArea();
		int getPerimeter();
	private:
		int length;
		int width;
};
CRectangle::CRectangle(){
	length = 0;
	width = 0;
}
CRectangle::CRectangle(int len, int w){
	length = len;
	width = w;
}

void CRectangle::setLength(int len){
	length = len;
}

void CRectangle::setWidth(int w){
	width = w;
}

int CRectangle::getPerimeter(){
	return (width*2)+(length*2);
}

int CRectangle::getArea(){
	return length*width;
}

int CRectangle::getLength(){
	return length;
}

int CRectangle::getWidth(){
	return width;
}

int main(){
	CRectangle a, b(10,12), c(11,12);
	cout<<"object A area: "<<a.getArea()<<endl;
	cout<<"object A perimeter"<<a.getPerimeter()<<endl;
	cout<<"object B area: "<<b.getArea()<<endl;
	cout<<"object B perimeter"<<b.getPerimeter()<<endl;
	cout<<"object C area: "<<c.getArea()<<endl;
	cout<<"object C perimeter: "<<c.getPerimeter()<<endl;
	return 0;
}
