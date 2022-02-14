#include<stdio.h>
int main()
{
	int num, x;
	int sum=0;
	
	printf("enter the number:");
	scanf("%d", &num);
	
	for(x=1; x<=num; x++)
	{
		sum=x+sum;
	}
	
	printf("Sum is=%d", sum);
}
