#include <iostream>
using namespace std;

class Shape{                                     // Class Declaration
    public:
        int length;
        int height;

        void setlength(int len);
        void setheight(int hei);
};
void Shape :: setlength(int len){               //outside class function Define ( using Scope :: ) 
    length = len;
}
void Shape :: setheight(int hei){
    height = hei;
}
class Square{
    public:
        int side;
        void setSide(int S){                   // Function define inside Scope
            side = S;
        }
        int getSide(){
            return side*side;
        }
};
class Rectangle : public Shape, public Square{      // Multiple inheritance
    public:
        // int Area;
        int getArea();
};
int Rectangle :: getArea(){
    return length*height;
}
int main(){
    Rectangle rect;                             // Object declare
    rect.setlength(20);                         
    rect.setheight(20);

    rect.setSide(4);
    cout<<"The Area of Square is: "<<rect.getSide()<<endl;
    int Area = rect.getArea();
    cout<<"The Area of Rectangle is: "<<Area<<endl;
}