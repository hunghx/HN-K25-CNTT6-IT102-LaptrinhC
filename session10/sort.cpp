// Sap xep 
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n= 100, k;
	int arr[n];
	for(k=0; k<n ; k++){
		arr[k] = rand() % 100;
	}
	
	for(k = 0; k<n; k++){
		printf("%d ", arr[k]);
	}
	printf("\n------------------------------------\n");
	// sap xep 
	// Bubble Sort
	int i, j;
	
//	for(i = 0; i< n-1; i++){
//		for(j = 0; j< n-1-i; j++){
//			if(arr[j] < arr[j+1]){
//				// swap
//				int temp = arr[j];
//				arr[j]  = arr[j+1];
//				arr[j+1] = temp;
//			}
//		}
//	}
	
//	for(i = 0; i<n-1; i++){
//		int min = arr[i];
//		int min_index = i;
//		for(j=i+1; j<n; j++){
//			if(min > arr[j]){
//				min = arr[j];
//				min_index = j;
//			}
//		}
//		if(min_index != i){
//			// swap
//			arr[min_index] = arr[i];
//			arr[i] = min;
//		}
//	}

	for(i = 1; i < n; i++){
		// phan tu can chen arr[i]
		int value = arr[i];
		for(j = i-1 ; j >=0 && value < arr[j]; j--){
			arr[j+1] = arr[j];
		}
		arr[j+1] = value;
	}
	
	for(i = 0; i< n ; i++){
		printf("%d , ", arr[i]);
	}	
	
}
