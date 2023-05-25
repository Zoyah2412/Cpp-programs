#include<iostream>
using namespace std;
void display(char c,int n){
	for(int i=0;i<n;i++){
		printf("%c ",c);
	}
}
void display(char c){
	for(int i=0;i<80;i++){
		printf("%c ",c);
	}
}
void display(){
	for(int i=0;i<80;i++){
		printf("* ");
	}
}
int main(){
	char ch;
	int n;
	cout<<"Enter the character you want to print:";
	cin>>ch;
	cout<<"Enter how many time you want "<<ch<<"to be displayed:";
	cin>>n;
	display(ch,n);
	cout<<endl;
	display(ch);
	cout<<endl;
	display();
	cout<<endl;
	return 0;
}
