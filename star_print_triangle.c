#include<stdio.h>
int main(){
	int i,j,num;
	printf("enter the row:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=i;j>=1;j--){
			printf("%d",j);
		}
	printf("\n");
	}
}


