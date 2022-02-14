
#include<stdio.h>
int main()
{
	int Distance;
	float totalBill;
	
	printf("Enter the Distance traveled:");
	scanf("%d", &Distance);
	
	if(Distance<=30)
	{
		totalBill=50*Distance;
	}
	else
	{
		totalBill=50*30+(Distance-30)*40;
	}
	
	printf("Total Bill=%.2f", totalBill);
}