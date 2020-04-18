#include<iostream>

using namespace std;

class cRectangle{
    public:
	    void setLength(int len);
      	void setWidth(int w);
    	int getLength(){return length;};
    	int getWidth(){return width;};
    	int getArea(){return length * width;};
    	int getPerimeter(){return (length + width) * 2;};
    private:
	    int length;
    	int width;
};
void cRectangle::setLength(int len){
	length = len;
}
void cRectangle::setWidth(int w){
	width = w;
}
int main(){
    cRectangle box1;
    
    box1.setLength(20);
	box1.setWidth(20);

    cout << box1.getLength() << box1.getWidth()
    << box1.getArea() << box1.getPerimeter()
    << endl;
    
    return 0;
}