#include<iostream>
using namespace std;
class ftin;
class mcm{
    int m,cm;
   	public:
    	void data(){
			cout<<"\nEnter value in meter : ";
        	cin>>m;
			cout<<"\nEnter value in centimeter : ";
           	cin>>cm;
      	}
    friend float compare(mcm a,ftin b);
};
class ftin{
    int ft,in;
    public:
	    void data(){
			cout<<"\nEnter value in feet : ";
        	cin>>ft;
			cout<<"\nEnter value in inches : ";
        	cin>>in;
      }
      friend float compare(mcm a,ftin b);
};
float compare(mcm a,ftin b){
	float x,y,z;
	x=(a.m+(a.cm/100));
	y=(b.ft+(b.in/12));
	z=(y*0.304); //Since 1 ft = 0.304 m
	if(x>y)
		return x;
	else
		return y;
}
int main(){
   	mcm a;
   	ftin b;
	cout<<"\nEnter the value in meter and centimeter: ";
	a.data();
   	cout<<"\nEnter the value in feet and inches: ";
	b.data();
    compare(a,b);
   	cout<<"\nThe larger value is : "<<compare(a,b);
	return 0;
}