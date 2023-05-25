#include <iostream>
using namespace std;
class CIRCLE{
    private:
        double r;
    public:
        CIRCLE(double rad){
            r=rad;
        }
        void area_circle(){
            double area=3.14*r*r;
            cout<<"\nArea of the circle: "<<area;
        }
};
class RECTANGLE: public CIRCLE{
    private:
        double length;
        double breadth;
    public:
        RECTANGLE(double l,double b): CIRCLE(l){
            length=l;
            breadth=b;
        }
        void area_rect(){
            double area=length*breadth;
            cout<<"\nArea of the rectangle: "<<area;
        }
        
};
class BOX: public RECTANGLE{
    private:
        double length;
        double breadth;
        double height;
    public:
        BOX(double l, double b, double h):RECTANGLE(l,b){
            length=l;
            breadth=b;
            height=h;
        }
        void box_volume(){
            double volume=length*breadth*height;
            cout<<"\nVolume of the box: "<<volume;
        }
    
};
int main(){
    BOX b(4,5,6);
    b.area_circle();
    b.area_rect();
    b.box_volume();
    return 0;
}