#include<stdio.h>
int main(){
	int a;
	printf("Enter a number; ");
	scanf("%d",&a);
	if (a%5==0 && a%7!=0){
		printf("%d is a multiple of 5 and not divisible by 7",a);
	}
	else{
		printf("%d is divisible by 7",a);
	}
	return 0;

}
