#include <iostream>
using namespace std;

class Box {      // class declaration 
    public:
                // class members
        int length;  
        int breadth;
        int height;
                // member function declaration
         int getVolume(void);  
         void setLength(int len);
         void setBreadth(int bre);
         void setHeight(int hei);
};
                // function define
int Box :: getVolume(){   
    return length*breadth*height;
}
void Box :: setLength(int len){
    length = len;
}
void Box :: setBreadth(int bre){
    breadth = bre;
}
void Box :: setHeight(int hei){
    height = hei;
}

int main(){
                // Object declaration
    Box Box1;
    Box Box2;
    int volume = 0;
                // function call by object
    Box1.setLength(10);
    Box1.setBreadth(10);
    Box1.setHeight(10);

    Box2.setBreadth(50);
    Box2.setHeight(50);
    Box2.setLength(50);

    volume = Box1.getVolume();
    cout<<"The volume of Box1 is: "<<volume<<endl;

    volume = Box2.getVolume();
    cout<<"The volume of Box2 is: "<<volume<<endl;
}