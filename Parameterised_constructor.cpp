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
		void show()
		{
			cout<<"A = "<<a<<endl;
			cout<<"B = "<<b<<endl;
		}
};
int main()
{
	Test t1(300,12.5);
	t1.show();
	return 0;
}
