#include<iostream>
using namespace std;

int move(int a[],int n){
	if(n==0){
		return a[0];
	}
	a[n-2]=move(a,n-1);
	return a[n];
}

void rotate(int a[],int n,int k){
	if(k!=0){
		int temp=a[0];
		move(a,n);
		a[n-1]=temp;
		rotate(a,n,k-1);
	}
}

int main(){
	int a[12]={1,2,3,4,5,6,7,8,9,10,11,12};
	rotate(a,12,4);
	for(int i=0;i<12;i++){
		cout<<a[i]<<"\t";
	}
	return 0;
}

