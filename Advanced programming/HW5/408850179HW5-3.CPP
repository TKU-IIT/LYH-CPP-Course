#include<iostream>

using namespace std;

class Rectangle{
    public:
		Rectangle();
		Rectangle(int, int);
	    void setLength(int len);
      	void setWidth(int w);
    	int getLength();
    	int getWidth();
    	int getArea();
    	int getPerimeter();
		inline Rectangle operator+(Rectangle &a);
	private:
	    int length;
    	int width;
};
Rectangle::Rectangle(){
	length = 0;
	width = 0;
}
Rectangle::Rectangle(int L, int B){
	if(L <= 0 && B <= 0){
		length = 0;
		width = 0;
	}else{
		length = L;
		width = B;
	}
}
void Rectangle::setLength(int len){
	length = len;
}
void Rectangle::setWidth(int w){
	width = w;
}
int Rectangle::getLength(){
	return length;
}
int Rectangle::getWidth(){
	return width;
}
int Rectangle::getArea(){
	return length * width;
}
int Rectangle::getPerimeter(){
	return (length + width) * 2;
}
inline Rectangle Rectangle::operator+(Rectangle &a){
	Rectangle sum;
	
	sum.length = this->length + a.length;
	sum.width = this->width + a.width;
	
	return sum;
}
int main(){
    Rectangle test1, test2;
    Rectangle test3;
	
    test1.setLength(20);
	test1.setWidth(20);

	test2.setLength(30);
	test2.setWidth(35);

	test3 = test1 + test2;
	
    cout << test3.getLength() << "\n" 
	<< test3.getWidth() << "\n"
    << test3.getArea() << "\n"
	<< test3.getPerimeter()
    << endl;
    
    return 0;
}