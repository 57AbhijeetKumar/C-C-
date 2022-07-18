#include<stdio.h>
#include<math.h>
int main()
{
	int x,num,rev,a=0;
	printf("Enter a Number:-");
	scanf("%d",&num);
	x=num;
	while(num!=0)
	{
		rev=num%10;
		a=a+(rev*rev*rev);
		num=num/10;
	}
	if(x==a)
	{
		printf("%d is Armstrong Number",a);
	}
	else
	{
		printf("%d is Non-Armstrong Number",x);
	}
}
