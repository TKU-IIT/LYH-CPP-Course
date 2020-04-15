#include<iostream>
using namespace std;
class cRectangle{
    public:
        void setLength(int len);
        void setWidth(int w);
        int getArea(void);
    private:
        int width;
        int length;
};
void cRectangle::setLength(int len){
    length = len;
}
void cRectangle::setWidth(int w){
    width = w;
}
int cRectangle::getArea(void){
    return width * length;
}
int main(int argc, char const *argv[])
{
    cRectangle a;

    int w = 10, len = 10;
    a.setLength(len);
    a.setWidth(w);
    cout<<a.getArea()<<endl;
    return 0;
}
