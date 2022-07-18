#include<stdio.h>
int main()
{
	int x;
	printf("Enter a Number:-");
	scanf("%d",&x);
	if(x%5==0 && x%11==0)
	{
		printf("%d is Divisible by 5 as well as 11",x);
	}
	else
	{
		printf("%d is not Divisible by 5 as well as 11",x);
	}
}
