#include<stdio.h>
int main(){
	int i,j,k;
	for(i=4;i>0;i--){
		for(k>i+1;k>=4;k--){
			printf(" ");
		}
		for(j>=i*2;j>=0;j--){
			printf("*");
		}
		printf("\n");
	}
}
