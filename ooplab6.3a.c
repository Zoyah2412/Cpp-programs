#include<iostream>
using namespace std;
void display(char c='*',int n=80){
	for(int i=0;i<n;i++){
		printf("%c ",c);
	}
}
int main(){
	char ch;
	int n;
	cout<<"enter the character you want to print:";
	cin>>ch;
	cout<<"enter how many time you want that character to be displayed:";
	cin>>n;
	display(ch,n);
	cout<<endl;
	display(ch);
	cout<<endl;
	display();
	return 0;
}
