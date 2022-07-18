#include<iostream>
using namespace std;
class XYZ
{
	int x;
	protected:
		float b;
	public:
		int c;
}t1;
class ABC:public XYZ
{
	int d;
	protected:
		float e;
	public:
		int f;
		void setdata();
}t2;
void ABC::setdata()
{
	cout<<"Enter Marks of student"<<endl;
	cin>>b;
	cout<<"Marks is "<<b;
}
int main()
{
	t2.setdata();
	return 0;	
}
