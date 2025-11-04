#include <stdio.h>
#define MAX 100
int main(){
	// Quan li mang
	// Mang tinh
	// Mang dong 
	int arr[MAX], n, i;
	// Nhap mang
	printf("Nhap so luong phan tu mang : ");
	scanf("%d", &n);
	for(i=0; i< n; i++){
		printf("Arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	// Them phan tu vao mang (them cuoi)
	int newValue  = 100;
	
	if(n > MAX){
		// mang day 
	}else{
		arr[n] = newValue;
		n++;
	}
	// Xoa phan tu 
	// 1,2,3,4,5,6 -> index = 2
	for(i = 2 ; i < n-1; i++){
		arr[i] = arr[i+1];
	}
	n--;
	// in 
	// tim kiem
	// sap xep 
	
	
}
