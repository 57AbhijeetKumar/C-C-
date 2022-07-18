#include<iostream>
using namespace std;
int main()
{
	int n,s,r,x;
	cout<<"Armstrong Number b/w 1 to 1000 is:-";
	for(n=1;n<=1000;n++)
	{
		s=0;
		x=n;
		while(x!=0)
		{
			r=x%10;
			s=s+(r*r*r);
			x=x/10;
		}
		if(s==n)
		{
			cout<<n<<"\n";
		}
	}
	return 0;
}
