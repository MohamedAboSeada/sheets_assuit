#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		for(int j = n-1;j>i;j--){
			cout<<" ";
		}
		for(int j = 0;j<=i;j++){
			cout<<"*";
		}
		for(int j = 0;j<i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i =n;i>0;i--){
		for(int j = i;j<n;j++){
			cout<<" ";
		}
		for(int j = i;j>0;j--){
			cout<<"*";
		}
		for(int j = i-1;j>0;j--){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}