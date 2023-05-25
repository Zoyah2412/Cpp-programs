#include <iostream>
using namespace std;
inline int square(int n){
    return n*n;
}
inline int cube(int n){
    return n*n*n;
}
int main(){
    int num,sq,c;
    cout <<"Enter the number:";
    cin>>num;
    sq=square(num);
    cout<<"Square of "<<num<<" is "<<sq<<endl;
    c=cube(num);
    cout<<"Cube of "<<num<<" is "<<c<<endl;
}