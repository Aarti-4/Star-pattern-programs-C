#include<stdio.h>
int main(){
	int i ,j ,count=10,row;
	printf("enter the row:");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%d ",count);
			count--;
		}
		printf("\n");
	}
}
