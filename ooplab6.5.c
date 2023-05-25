#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
int main(){
	int n1,n2;
	cout<<"Enter the first number :";
	cin>>n1;
	cout<<"Enter the second number :";
	cin>>n2;
	cout<<"Before swap:\nx = "<<n1<<"\ny = "<<n2<<endl;
	swap(n1,n2);
	cout<<"After swap:\nx = "<<n1<<"\ny = "<<n2;
}