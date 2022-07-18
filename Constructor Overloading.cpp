#include<iostream>
using namespace std;
class A
{
	int len;
	int bredth;
	public:
		A();
		A(int);
		A(int,int);
		void showdata();
};
int main()
{
	A s1;
	A s2(111);
	A s3(121,234);
	
	s1.showdata();
	s2.showdata();
	s3.showdata();
	return 0;
}

A::A()
{
	len=123;
	bredth=20;
}

A::A(int x)
{
	len=bredth=x;
}

A::A(int x,int y)
{
	len=x;
	bredth=y;
}

void A::showdata()
{
	cout<<"Lenght = "<<len<<endl;
	cout<<"Bredth = "<<bredth<<endl;
}

