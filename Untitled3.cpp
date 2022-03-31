#include <stdio.h>

int main()
{
	int A, B, C,max,min;

	printf("Enter the numbers A, B and C: ");
	scanf("%d %d %d", &A, &B, &C);

	if (A >= B && A >= C){
		max=A;
}
	if (B >= A && B >= C){
		max=B;	
	if (C >= A && C >= B)
		max=C;
	if (A <= B && A <= C)
		min=A;
	if (B <= A && B <= C)
		min=B;
		
	if (C <= A && C <= B)
		min=C;
	
	printf("Largest among three is %d\n",max);
	printf("Smallest among three is %d\n",min);
	if(max%2==0){
		printf("%d is even\n",max);
	}
	else{
		printf("%d is odd\n",max);
	}
	if(min%2==0){
		printf("%d is even\n",min);
	}
	else{
		printf("%d is odd\n",min);
	}
	return 0;
}

}
