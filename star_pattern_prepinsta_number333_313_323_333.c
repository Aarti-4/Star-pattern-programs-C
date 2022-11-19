#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=4;i++){
		for(j=1;j<=3;j++){
			if(i==2&&j==2){
				printf("1");
            
			}
			else if(i==3&&j==2){
				printf("2");
			}
			else{
				printf("3");
			}
		}
		printf("\n");
	}
}
