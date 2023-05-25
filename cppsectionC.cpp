#include<iostream>
using namespace std;
int main(){
	int T;
	cout<<"Number of test cases: ";
	cin>>T;
	while(T--){
		int N,M;
		cout<<"Enter number of researchers excluding guest of honour : ";
		cin>>N;
		cout<<"Enter total number of fields : ";
		cin>>M;
        int arr[M]={};
		int num;
		for(int i=0;i<N;i++){
			cin>>num;
			arr[num-1]=1;
		}
		string ans ="NO";
		for(int i=0;i<M;i++){
			if(arr[i]==0){
				ans="YES";
				break;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}