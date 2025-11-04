#include <stdio.h>
int main(){
	int N = 101;
	int flag =1; // la snt
	int i;
	for(i =2 ; i*i < N ; i++){
		if(N%i == 0){
			// i là uoc
			// ko phai so nguyen
			flag =0;
			break; // tranh du thua
		}
	}

	if(flag){
		// là snt
		printf("1");
	}else{
		// ko phai snt
		printf("0");
	}
	
}
