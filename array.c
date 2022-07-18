#include<stdio.h>
int main()
#define MAX 100
{
	int a[5];
	int size,i;
	printf("Enter size of Array:-");
	scanf("%d",&size);
	printf("Enter elements in array:-");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
}
