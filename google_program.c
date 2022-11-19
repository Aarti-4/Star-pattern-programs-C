#include<stdio.h>
int main(){
	int i,j,p,q;
	for(i=1;i<=5;i++){
		if(i%2==0){
			p=1;q=0;
		}
      else{
      	p=0;q=1;
	  }
   for(j=1;j<=i;j++)
   	if(j%2==0)
   		printf("%d",p);
    else
 printf("%d",q);
 printf("\n");
}
}




	

