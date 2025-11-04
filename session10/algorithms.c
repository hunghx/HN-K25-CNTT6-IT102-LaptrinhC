// Thuat toan : là các buoc huu han de giai quyet 1 bai toan

// Tìm kiem và Sap xep 

// Tim kiem : 

#include <stdio.h>
int main(){
	int arr[]= {1,2,3,4,5,6,7,9,10, 11};
	// tim ph tu có value = 8
	int i ;
	// Linear Search
//	for(i = 0; i< 10; i++){
//		if(arr[i] == 8){
//			// tim thay
//			printf("Vi tri index = %d tim thay gia tri 8\n", i);
//		}
//	}
	// ko tim thay
	// Binary Search : phai dc sap xep
	int start = 0, end = 9;
	while(start < end){
		int mid = (start+end)/2;
		if(arr[mid] == 8){
			//
			printf("Vi tri index = %d tim thay gia tri 8\n", mid);
			return 0;
		}else if(arr[i]>8){
			end = mid -1;
		}else{
			start = mid+1;
		}
	}
	printf("ko tim thay");
	
}


