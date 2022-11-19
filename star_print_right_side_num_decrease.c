#include<stdio.h>
int main(){
	int i ,j ,k ,spc,row,num=5;
	printf("enter the rows:");
	scanf("%d",&row);
	spc=row+4-1;
	for(i=1;i<=row;i++){
		for(k=spc;k>=1;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++)
			printf("%d",num);
			printf("\n");
		num--;
		spc--;
	}
}
