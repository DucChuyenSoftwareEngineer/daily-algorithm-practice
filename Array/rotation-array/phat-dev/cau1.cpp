#include<iostream>
using namespace std;

void input(int a[],int n){
	cout<<"Each element of array: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}

void output(int a[],int n){
	cout<<"Array: ";
	for(int i=0;i<n;i++){
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
int main(){
	int n;
	cout<<"Number of element in array: ";
	cin>>n;
	
	int a[n];
	input(a,n);
	
	int d;
	cout<<"Enter the number of element you want to get: ";
	cin>>d;
	int temp[d];
	
	for(int i=0;i<d;i++){
		temp[i]=a[i];
	}
	
	for(int i=0;i<n-d;i++){
		a[i]=a[i+d];
	}
	
	output(temp,d);
	output(a,n-d);
	
	for(int i=0;i<d;i++){
		a[n-d+i]=temp[i];
	}
	
	output(a,n);
	
	return 0;
}

