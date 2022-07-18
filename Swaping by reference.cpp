#include<iostream>
using namespace std;
int swap(int &,int &);
int main()
{
	int x,y;
	cout<<"Enter two Numbers"<<endl;
	cin>>x>>y;
	swap(x,y);
	return 0;
}
int swap(int &c,int &d)
{
	int t;
	t=c;
	c=d;
	d=t;
	cout<<c<<" "<<d;
}
