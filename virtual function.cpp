#include<iostream>
using namespace std;

class Test
{
	int a;
	float b;
	public:
		void setdata()
		{
			cout<<"This is the base Class"<<endl;
		}
	virtual	void grtdata()
		{
			cout<<"This is Abhijeet Singh"<<endl;
		}
};
class B: public Test
{
	public:
	void grtdata()
	{
		cout<<"This is Avi Singh"<<endl;
	}
};
class C: public Test
{
	public:
	void grtdata()
	{
		cout<<"This is Bholu Singh"<<endl;
	}
};

int main()
{
	Test *ptr;
	Test ob1;
	B ob2;
	C ob3;
	ptr=&ob3;
	ptr->grtdata();
	return 0;
}
