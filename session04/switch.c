// SWITCH CASE 
#include <stdio.h>

int main(){
	
	int a = 1;
	switch(a){
		case 1: 
		{
			// thuc hien thao tac khi a = 1
			int b = 10;
			printf("1 - b = %d\n", b);
		}
			break;
		case 2 :
		{
			int b = 100;
			printf("2 - b = %d\n", b);
		 	// ...
		}
		 	break;
		default: 
			// mac dinh neu ko roi vao bat case nao
			printf("mac dinh");
	}
	return 0;	
}
