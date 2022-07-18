#include<stdio.h>
int main()
{
	int x;
	printf("Enter any Year:-");
	scanf("%d",&x);
	if((x%4==0&&x%100!=0)||(x%400==0))
	{
		printf("Leap Year");
	}
	else
	{
		printf("Not Leap Year");
	}
}
