#include<iostream>
using namespace std;

void (*funptr)(int,int);
void add(int x,int y)
{
	cout<<"Sum = "<<x+y<<endl;
}

void substract(int x,int y)
{
	cout<<"x-Y = "<<x-y;
}

int main()
{
	funptr = add;
	add(20,30);
	funptr = substract;
	substract(200,100);
	return 0;
}
