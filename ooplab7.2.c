#include<iostream>
using namespace std;
class Complex{
	private:
		int real,imaginary;
	public:
		Complex(int a,int b){
			this->real=a;
			this->imaginary=b;
			cout<<"real part="<<this->real;
			cout<<" imaginary part="<<this->imaginary;
		}
		Complex(int a){
			this->real=a;
			this->imaginary=0;
			cout<<"real part="<<this->real;
			cout<<" imaginary part="<<this->imaginary;
		}
		Complex(){
			this->real=0;
			this->imaginary=0;
			cout<<"real part="<<this->real;
			cout<<" imaginary part="<<this->imaginary;
		}
};
int main(){
	cout<<"Complex number 1:";
	Complex a(10,15);
	cout<<"\nComplex number 2:";
	Complex b(10);
	cout<<"\nComplex number 3:";
	Complex c;
	return 0;
}