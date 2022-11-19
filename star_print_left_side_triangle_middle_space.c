#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<=8;i++){
		for(j=1;j<=i;j++){
			if(i==3&&j==2||i==4&&j==2||i==4&&j==3||i==5&&j==2||i==5&&j==3||i==5&&j==4||i==6&&j==2||i==6&&j==3||i==6&&j==4||i==6&&j==5||i==7&&j==2||i==7&&j==3||i==7&&j==4||i==7&&j==5||i==7&&j==6){
				printf(" ");
			}
			else{
				printf("*");
			}
		}
			printf("\n");
	}
}
