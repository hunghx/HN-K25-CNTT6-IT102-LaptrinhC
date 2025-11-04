#include <stdio.h>
//Yêu c?u ngu?i dùng nh?p vào các thông tin c?a m?t sinh viên:
//Nam sinh (s? nguyên).
//Ði?m trung bình (s? th?c).
//Chuong trình c?n th?c hi?n:
//Ki?m tra nam sinh h?p l? (nam ph?i l?n hon 1900 và nh? hon ho?c b?ng nam hi?n t?i).
//N?u không h?p l? ? in "Nam sinh khong hop le".
//Xác d?nh sinh viên d? 18 tu?i hay chua.
//X?p lo?i h?c l?c d?a trên di?m trung bình:
//< 5.0 ? "Yeu"
//5.0 – 6.4 ? "Trung binh"
//6.5 – 7.9 ? "Kha"
//= 8.0 ? "Gioi"
//In toàn b? thông tin sinh viên + k?t qu? ki?m tra ra màn hình.

int main(){
	int bornIn;
	float avgPoint;
	printf("Nhap nam sinh : ");
	scanf("%d", &bornIn);
	printf("Nhap diem trung binh : ");
	scanf("%f", &avgPoint);
	
	if(bornIn<=1900 || bornIn> 2025){
		printf("Nam sinh ko hop le !!");
		return 0;
	}
	int age = 2026 - bornIn;  // tuoi
	printf("Thong tin sinh vien \n");
	printf("Nam sinh : %d\n", bornIn);
	printf("Tuoi : %d\n", age);
	
	if(avgPoint<5){
		printf("Xep loai : Yeu");
	}else if(avgPoint<6.5){
		printf("Xep loai : trung binh");
	}else if(avgPoint<8){
		printf("Xep loai : Kha");
	}else{
		printf("Xep loai : GIoi");
	}
	
	
	return 0;
}
