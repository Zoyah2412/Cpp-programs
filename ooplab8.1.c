#include<iostream>
using namespace std;
class Circle{
protected:
    double r;
public:
    void radius(double r1)
    {
        this->r = r1;
    }
    double area()
    {
        return 3.14*r*r;
    }
};
class Rectangle : public Circle{
public:
    double area(int b){
        int l=r;
        return l*b;
    }
};
int main(){
    Rectangle r;
    r.radius(18);
    cout <<"Area of rectangle : "<< r.area(4)<<endl;
    cout <<"Area of circle : "<< r.Circle::area() ;
    return 0;
}