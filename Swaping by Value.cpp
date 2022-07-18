#include<iostream>
using namespace std;
int swap(int,int);
int main()
{
	int a,b;
	cout<<"Enter two Numbers"<<endl;
	cin>>a>>b;
	swap(a,b);
	
	return 0;
}
int swap(int c,int d)
{
	
	int t;
	cout<<"Number before swaping is "<<c<<" "<<d<<endl;
	t=c;
	c=d;
	d=t;
	cout<<"Number After Swaping is "<<c<<" "<<d<<endl;
}
