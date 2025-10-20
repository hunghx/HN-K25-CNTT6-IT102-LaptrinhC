#include <stdio.h>
#include <math.h>
int main(){
	int a, b;
	float S;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	
	// kiem tra dieu kiem 
	if(a > 0 && b >0){
		// tinh S
		S = sqrt(a*a + b*b)/(a+b) + (sqrt(a)+sqrt(b))/(a*b);
		printf("S = %.2f", S);
	}else{
		// thong bao loi
		printf("a va b phai la so nguyen duong");
	}
	return 0;
}
