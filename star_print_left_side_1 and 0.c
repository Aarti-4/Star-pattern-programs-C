#include<stdio.h>
int main(){
	int i,j,row=5;
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			if(i==j){
				printf("1");
				printf("\n");
			}
			else{
				printf("0");
				
			}
		}
	}
}
