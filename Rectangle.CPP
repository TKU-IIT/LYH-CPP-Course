#include<iostream>
using namespace std;
class cRectangle{
public:
	int getWidth(){return width;};
	int getLength(){return length;};
	void setWidth(int w);
	void setLength(int l);
	int getArea(){return length * width;};
	int getPerimeter();
private:
	int length;
	int width;
};
void cRectangle::setLength(int l){
	length = l;
}
void cRectangle::setWidth(int w){
	width = w;
}
int cRectangle::getPerimeter(){
	return 2 * (length + width);
}
int main(){
	cRectangle myBox1, box2;
	myBox1.setLength(10);
	myBox1.setWidth(5);
	cout << "Area = " << myBox1.getArea() << endl ;
	return 0;
}
