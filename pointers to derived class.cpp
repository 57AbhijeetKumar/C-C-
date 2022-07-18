#include<iostream>
using namespace std;
class Base
{
	public:
		int a;
		void show()
		{
			cout<<" a = "<<a<<endl;
			cout<<"This is base class"<<endl;
		}
};
class Derived:public Base
{
	public:
		int b;
		void show()
		{
			cout<<" b = "<<b<<endl;
			cout<<"This is Derived class"<<endl;
		}
};
int main()
{
	Base b1;
	b1.show();
	return 0;
}
