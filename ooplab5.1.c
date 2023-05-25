#include<iostream>
using namespace std;
class c1;
class c2{
    int a;
    public:
        c2(){
        	cout<<"a = ";
        	cin>>a;
		}
        void disp()
        {
                cout<<"\nValue of a after swap = "<<a;
        }
        friend void swap(c2 *a, c1 *b);
};
class c1{
    int b;
    public:
        c1()
        {
        	cout<<"b = ";
        	cin>>b;
        }
        void disp()
        {
                cout<<"\nValue of b after swap = "<<b;
        }
        friend void swap(c2 *a, c1 *b);
};
void swap(c2 *n1, c1 *n2)
{
        int temp;
        temp=n1->a;
        n1->a=n2->b;
        n2->b=temp;
}
int main()
{
        c2 x;
        c1 y;
        swap(&x, &y);
        x.disp();
        y.disp();
        return 0;
}
