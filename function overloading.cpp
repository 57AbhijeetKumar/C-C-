#include<iostream>
using namespace std;
class test
{
	int x;
	float y;
	public:
		void setdata(int,float);
		void display();
		void operator - ();
};
void test::setdata(int a,float b)
{
	x=a;
	y=b;
}
void test::display()
{
	cout<<x<<endl;
	cout<<y<<endl;
}
void test::operator -()
{
	x=-x;
	y=-y;
}
int main()
{
	test t1;
	t1.setdata(12,12.6);
	t1.display();
	-t1;
	t1.display();
	return 0;
}
