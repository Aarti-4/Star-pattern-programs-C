#include<stdio.h>
int main(){
	int i ,j ,k ,spc,row;
	char ch='A';
	printf("enter the rows:");
	scanf("%d",&row);
	spc=row+4-1;
	for(i=1;i<=row;i++){
		for(k=spc;k>=1;k--){
			printf(" ");
		}
		for(j=1;j<=i;j++)
			printf("%c",ch);
			printf("\n");
		ch++;
		spc--;
	}
}
