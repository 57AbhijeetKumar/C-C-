#include<stdio.h>
int main()
{
	int x;
	printf("Enter a Number:-");
	scanf("%d",&x);
	if(x%2==0)
	{
		printf("%d is Even Number",x);
	}
	else
	{
		printf("%d is Odd Number",x);
	}
}
