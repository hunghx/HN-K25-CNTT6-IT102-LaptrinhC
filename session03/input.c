#include <stdio.h>

int main(){
	int age;
	// printf
//	printf("Helooooooooooooo");
	// Su dung ki tu dinh dang : 
//	printf("\n Ten : %-20s - Tuoi : %d - Dtb : %10.1f - Xep loai : %c","Dang Ngoc Hoang",18,8.5,'A');
	
	// ve bang
	// tieu de
	printf("+---------------+------------+------------+\n");
	printf("| %-13s | %-10s | %-10s |\n","Ngay dat hang","Khach hang","Muc");
	printf("+---------------+------------+------------+\n");
	printf("| %-13s | %-10s | %-10s |\n","2020-06-01","Vinh","But chi");
	printf("+---------------+------------+------------+\n");
	printf("| %-13s | %-10s | %-10s |\n","2020-06-01","Vinh","But chi");
	printf("+---------------+------------+------------+\n");
	printf("| %-13s | %-10s | %-10s |\n","2020-06-01","Vinh","But chi");
	printf("+---------------+------------+------------+\n");
	printf("| %-13s | %-10s | %-10s |\n","2020-06-01","Vinh","But chi");
	printf("+---------------+------------+------------+\n");
	printf("| %-13s | %-10s | %-10s |\n","2020-06-01","Vinh","But chi");
	printf("+---------------+------------+------------+\n");
	
//	char ch = 'A';
//	putchar(ch);
	
	
	// Nhap du lieu
	printf("Nhap tuoi sinh vien : ");
	scanf("%d",&age); // truy cap dia chi cua bien : &
	
//	printf("%d", age);
//	char name[20];
//	printf("Nhap ten sinh vien : ");
//	scanf("%s", name); // hoc sau
//	printf("%s", name);
	
//	getchar();
	fflush(stdin);
	// nhap ki tu
	char ch;
	ch = getchar();
	putchar(ch);
	return 0;
} 
