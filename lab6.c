#include<stdio.h>
int main(){
	/*
	10101
	1010
	101
	10
	1
	*/
	int i,j,k;  
	for(i=5;i>=1;i--){ k=1;
		for(j=1;j<=i;j++){
				printf("%d",k);
				k=!k;
		}
			printf("\n");
	}
}
