#include<stdio.h>
int  main(){
	int i, j,row;
	printf("enter the row:");
	scanf("%d",&row);
	for(i=0;i<row;i++){
		for(j=row;j>=i;j--){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
