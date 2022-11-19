#include<stdio.h>
int main(){
	int i, j ,k ;
	for(i=0;i<4;i++){
		for(k=4;k>i+1;k--){
			printf(" ");
		}
		for(j=0;j<=i*2;j++){
			printf("*");
		}
		printf("\n");
	}
}

