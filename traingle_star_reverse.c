#include<stdio.h>
int main(){
	int i,j,num;
	printf("enter the rows:");
	scanf("%d",&num);
	for(i=num;i>=1;i--){
		for(j=i;j>=1;j--){
			printf("*");
		}
	printf("\n");
	}
}
