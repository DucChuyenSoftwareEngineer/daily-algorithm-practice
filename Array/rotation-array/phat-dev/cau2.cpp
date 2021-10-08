#include<iostream>
using namespace std;

void input(int a[],int n){
	cout<<"Each element of array: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

int main(){
	int n;
	cout<<"Number of element in array: ";
	cin>>n;
	
	int a[n];
	input(a,n);
	
	int sum;
	cout<<"Sum: ";
	cin>>sum;
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==sum){
				cout<<"True";
				return 0;
			}
		}
	}
	cout<<"False";
	return 0;
}

