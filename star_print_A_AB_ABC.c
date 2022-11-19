 #include<stdio.h>
int main(){
	int row,i,j;
     char ch='A';
	printf("enter the rows:");
	scanf("%d",&row);
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%c",ch);
			ch++;
		}
		ch='A';
		printf("\n");
	}
}
