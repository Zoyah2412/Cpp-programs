#include <iostream>
using namespace std;
class Circle
{
protected:
    float radius;
public:
    void setRadius()
    {
    	float radius;
        cout<<"Enter the radius: ";
        cin>>radius;
        this->radius = radius;
    }

    virtual double getArea()
    {
        return 3.14 * radius * radius;
    }
};

class Rectangle : public Circle
{
public:
	int b;
    double getArea()
    {
        cout<<"\nEnter the breadth: ";
        cin>>b;
        return (radius * b);
    }

};
class cylinder: public Circle
{
	public:
	int h;
	float getVolume(){
		cout<<"\nenter the height of the cylinder:";
		cin>>h;
		return 3.14*radius*radius*h;
	}
};
int main()
{
    Rectangle r;
    r.setRadius();
    cout <<"Area of Circle: "<< r.Circle::getArea() ;
    cout <<"Area of Rectangle: "<< r.getArea() <<endl;
	cylinder c;
	c.setRadius();
	cout <<"Area of Circle: "<< c.Circle::getArea() ;
	cout<<"Volume of the Cylinder:"<<c.getVolume();
    return 0;
}
}