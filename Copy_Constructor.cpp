#include<iostream>
using namespace std;
class Test
{
	int a;
	float b;
	public:
		Test(int x,float y)
		{
			a=x;
			b=y;
		}
		Test(Test &t)
		{
			a=t.a;
			b=t.b;
		}
		void show()
		{
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}
};
int main()
{
	Test t1(300,12.5);
	Test t2(t1);
	t1.show();
	t2.show();
	return 0;
}
