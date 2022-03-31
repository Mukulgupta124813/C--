#include<stdio.h>
int main(){
	int a ,rev=0, b;
	printf("Enter the two digit number: ");
	scanf("%d",&a);
	while(a!=0){
		b=a%10;
		rev = rev*10+b;
		a=a/10;
	}
	printf("Reverse of the number is %d",rev);
	return 0;
}
