#include<stdio.h>
int main(){
	int i,j,num=3;
	for(i=1;i<=4;i++){
		for(j=1;j<=i;j++){
			printf("%d",num);
		}
		num++;
		printf("\n");
	}
		for(i=3;i>=1;i--){
			for(j=i;j>=1;j--){
				printf("%d",num);
			}
			num--;
			printf("\n");
		}
	
}
