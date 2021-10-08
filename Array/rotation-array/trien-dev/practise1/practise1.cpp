#include<iostream>

#include<conio.h>

#include"nhapxuat.h"

using namespace std;
void nhapmang(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "nhap phan tu thu a[" << i << "] la : ";
    cin >> a[i];
  }
}
void xuatmang(int a[], int n) {
  for (int j = 0; j < n; j++) {
    cout << "\ngia tri phan tu thu a[" << j << "] la : ";
    cout << a[j];
  }
}
int main() {
  int n, d;
  int a[n], b[d];
  cout << "nhap n :";
  cin >> n;
  nhapmang(a, n);
  cout << "\nnhap so phan tu ban muon tach ra :";
  cin >> d;
  for (int i = 0; i < d; i++) {
    b[i] = a[i]; //lay gia tri phan tu tach ra cho vao mang khac
    cout << "\ngia tri phan tu duoc lay ra : ";
    cout << b[i];
  }
  for (int j = 0; j < n - d; j++) {
    a[j] = a[j + d];
  }
  for (int k = 0; k < d; k++) {
    a[n - d + k] = b[k];
  }
  xuatmang(a, n);
}
