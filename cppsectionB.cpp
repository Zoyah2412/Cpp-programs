#include <iostream>
using namespace std;
int main(){
    int n,num,d,r=0;
    cout<<"Enter a number :";
    cin>>n;
    num=n;
    while(n>0){
        d=n%10;
        r=(r*10)+d;
        n=n/10;
    }
    if (num==r)
        cout<<"True";
    else
        cout<<"False";
    return 0;
}