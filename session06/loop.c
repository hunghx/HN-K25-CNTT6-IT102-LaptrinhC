// FOR , WHILE , DO ... WHILE
// FOR : biet truoc so lan lap
#include <stdio.h>

int main(){
	int i;
//	for(i=0 ; i<=10 ; i++ ){
//		// block scope
//		printf("%d\n", i);
//	}
	
	// WHILE vs DO ... WHILE 
	// in ra 10 so nguyen duong chia het cho 7 dau tien
	int N = 1;
	int dem = 0;
//	while(dem < 10){
//		if(N%7 == 0){
//			printf("%d\n", N);
//			dem++;
//		}
//		N++;
//	}
	
	
//	do{
////		if(N == 7){
////			N++;
////			continue;
////		}
//		if(N%7==0){
//			printf("%d\n", N);
//			dem++;
//		}
//		if(dem == 5){
//			return 0;
//		}
//		N++;
//	}while(dem<10);
	
	// Câu lênh nhay : break, continue, return
	
	// Ung dung menu : 
	// Menu : gôm cac chuc nang
	// 1. kiem tra so chan/ le
	// 2. kiem tra so chinh phuong
	// 3. kiem tra so nguyen to
	// 4. thoat 
	
	while(1){
		printf("-------------Menu------------\n");
		printf("1. kiem tra so chan / le\n")	;
		printf("2. kiem tra so chinh phuong\n")	;
		printf("3. kiem tra so nguyen to\n")	;
		printf("4. thoat\n");
		printf("Nhap vao chuc nang muon chon : ");
		int choice;
		scanf("%d", &choice);
		
		switch(choice){
			case 1:
				break;
				
				
			case 4: 
				printf("Thoat chuong trinh");
				break;
		}
		if(choice == 4){
			break;
		}
	}
	
	return 0;	
}
