#include<stdio.h>
int main(){
	int i;
	printf("enter the number");
	scanf("%d",&i);
	if(i==-i){
		printf("enter num is negative");
	}
	else if(i==i){
		printf("the number is positive");
	}
	else if(i==0){
		printf("number is zero");
	}
	return 0;
}
