#include<stdio.h>
int main(){
	int n,a=1,c;
	printf("Enter the number of rows; ");
	scanf("%d",&n);
	
	for(int i=1;i<=n;++i){
		
		for(int j=1;j<=i;++j){
			a=j*j;
			printf("%d ",a);
			a=c;
		}
		printf("\n");
	}
	return 0;
}
