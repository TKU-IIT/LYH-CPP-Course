#include<iostream>

using namespace std;

class cRectangle{
	public:
	void setLength(int len);
	void setWidth(int w);
	int get_area();
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
int cRectangle::get_area(){
	return width * length;
}
int main(){
    cRectangle box1;
    box1.setLength(100);
    box1.setWidth(20);
    cout << box1.get_area() << endl;
    return 0;
}