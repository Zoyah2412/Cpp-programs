#include<iostream>
using namespace std;
float area(int r){
	return 3.14*r*r;
}
float area(float l,float b){
	return l*b;
}
float area(int h,int b){
	return 0.5*h*b;
}
int main(){
	int r;
	cout<<"Enter the radius of the circle:";
	cin>>r;
	cout<<"Area of the circle is :"<<area(r)<<endl; 
	float l,b;
	cout<<"Enter the length of the recatangle :";
	cin>>l;
	cout<<"Enter the breath of the recatangle :";
	cin>>b;
	cout<<"Area of the rectangle is :"<<area(l,b)<<endl; 
	int h,base;
	cout<<"Enter the height of the triangle :";
	cin>>h;
	cout<<"Enter the base of the triangle :";
	cin>>base;
	cout<<"Area of the triangle is :"<<area(h,base);
}
