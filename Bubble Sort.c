#include<stdio.h>
#define MAX 100
int main()
{
	int i=0,j=0,temp,flag;
	int a[MAX];
	int size;
	printf("Enter size of Array:-");
	scanf("%d",&size);
	printf("Enter Elements in Array:-");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size-1;i++)
	{
		flag=0;
		for(j=0;j<size-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		if(flag==0)
		break;
	}
	for(i=0;i<size;i++)
	{
		printf("%d",a[i]);
	}
}
