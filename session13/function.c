#include <stdio.h>

// Nguyen mau ham
// datatype ten_ham(danh sach tham so); 
// tham so la cac bien su dung trong ham
// kieu void la kieu dac biet dung cho cac ham ko tra ve gia tri
int sum();
int add(int a, int b); // bien tham so
int sumArray(int arr[],int size);
int giaiThua(int n);
void binhPhuong(int b); // con tro

int main(){
	// goi ham de thuc thi
	// tenham(danh sach doi so); 
	// doi so la cac gia tri truyen vao cho tham so khi goi ham
//	printf("Tong cua 2 so %d va %d la %d \n",5,6,add(5,6));
//	printf("Tong cua 2 so %d va %d la %d \n",2,4,add(2,4));
//	printf("Tong cua 2 so %d va %d la %d \n",-1,6,add(-1,6));
//	printf("Tong cua 2 so %d va %d la %d \n",1,6,add(1,6));
//  truyen doi so vao tham so cua ham có 2 cach truyen : 
//  truyen tham dia chi tham chieu(arr, string, point, struct) và 
//	truyen gia tri(4 kieu co ban va cac kieu mo rong)
	int i,a = 10;
//	printf("a =  %d \n", a); // a =10
//	binhPhuong(&a);
//	printf("a =  %d \n", a); // a = 100
	int arr[]={1,2,3,4};
	for(i=0; i<4;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	sumArray(arr, 4);
	for(i=0; i<4;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0; // return dung de tra ve gia tri cho ham
}

// trien khai ham
void binhPhuong(int b){
	b = b*b;
}
int giaiThua(int n){
	if(n<0){
		return -1; // loi
	}
	int gt = 1,i;
	for(i =2;i<=n; i++){
		gt*=i;
	}
	return gt;
};
int sumArray(int arr[],int size){ // 2 mang dang cung dia chi
	int i, sum = 0;
	for(i=0;i<size;i++){
		sum+=arr[i];
		arr[i] = 0;
	}
	return sum;
}
int sum(){
	int a, b; // bien cuc bo
}

int add(int a, int b){
	// su dung a, b tu ben ngoai
	return a+b;
}
