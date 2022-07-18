#include<stdio.h>
int main()
{
	int x,num,rev,sum=0;
	printf("Enter a Number:-");
	scanf("%d",&num);
	x=num;
	while(num!=0)
	{
		rev=num%10;
		sum=sum*10+rev;
		num=num/10;
	}
	if(x==sum)
	{
		printf("%d Number is Pallindrome",x);
	}
	else
	{
		printf("%d Number is not Pallindrome",x);
	}
}
