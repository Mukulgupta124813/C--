#include<stdio.h>
int main(){
	int a=0,b=1,n,c;
	printf("Enter the limit of fibnocci series: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("%d\n",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}
