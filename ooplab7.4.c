#include<iostream>
using namespace std;
class Complex{
	private:
		int real,imaginary;
	public:
		void display(){
			cout<<"real part="<<this->real;
			cout<<" imaginary part="<<this->imaginary<<endl;
		}
		Complex(int a,int b){
			this->real=a;
			this->imaginary=b;
			this->display();
		}
		Complex(int a){
			this->real=a;
			this->imaginary=0;
			this->display();
		}
		Complex(){
			this->real=0;
			this->imaginary=0;
			this->display();
		}
		~Complex(){
			cout<<"Inside Destructor"<<endl;
		}
};
int main(){
	cout<<"Complex number 1:";
	Complex a(10,15);
	cout<<"Complex number 2:";
	Complex b(10);
	cout<<"Complex number 3:";
	Complex c;
	return 0;
}