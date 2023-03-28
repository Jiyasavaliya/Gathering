#include<stdio.h>
void fac() {

 int n,sum=1;
 
 printf("enter the value : ");
	scanf("%d",&n);
 
 for(int i=1; i<=n; i++)
 {
 	sum*=i;
 	
 }
printf("%d",sum);
}

int main(){
	
	fac();
	
	
}
