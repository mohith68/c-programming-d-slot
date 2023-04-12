#include<stdio.h>
int main(){
	int a;
	printf("enter the number");
	scanf("%d",&a);
	if(a%5==0){
		printf("number is divisible by 5");
	}
	else if(a%11==0){
		printf("number is divisible");
	}
	else{
		printf("given number dosent divisible by 5 and 11");
	}
	return 0;
}
