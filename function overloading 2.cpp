#include<iostream>
using namespace std;
class A
{
	int x;
	int y;
	public:
		void Sum();
		int Sum(int,int);
		int Sum(int,int,int);
};
void A::Sum()
{
	x=10;
	y=20;
	cout<<"Sum is "<<x+y<<endl;
}
int A::Sum(int a,int b)
{
	return(a+b);
}
int A::Sum(int a,int b,int c)
{
	return(a+b+c);
}
int main()
{
	A ob;
	ob.Sum();
	cout<<"Sum is "<<ob.Sum(25,25)<<endl;
	cout<<"Sum is "<<ob.Sum(25,25,25);
	return 0;
}
