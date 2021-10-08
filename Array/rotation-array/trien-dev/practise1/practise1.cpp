#include<iostream>

#include<conio.h>

using namespace std;
void nhapmang(int a[], int n) {
  for (int i = 0; i < n; i++) {
  	cout<<"gia tri phan tu thu a["<<i<<"] la : ";
    cin >> a[i];
  }
}
void xuatmang(int a[], int n) {
  for (int j = 0; j < n; j++) {
    cout << a[j]<<"\t";
  }
  cout<<endl;
}

void Tachmang(int a[],int b[],int d){
	for (int i = 0; i < d; i++) {
    b[i] = a[i]; //lay gia tri phan tu tach ra cho vao mang khac
  }
}

void Daymang(int a[],int n,int d){
	  for (int j = 0; j < n - d; j++) {
    a[j] = a[j + d];
  }
}

void Hoanthien(int a[],int b[],int n,int d){
	  for (int k = 0; k < d; k++) {
    a[n - d + k] = b[k];
  }
}
int main() {
  int n,d;
  cout << "nhap n :";
  cin >> n;
  int a[n];
  nhapmang(a, n);
  cout<<"nhap d: ";
  cin>>d;
  int b[d];
  Tachmang(a,b,d);
  Daymang(a,n,d);
  Hoanthien(a,b,n,d); 
  

  xuatmang(a, n);
  
}
