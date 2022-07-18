#include<iostream>
using namespace std;
class Complex
{
	int a,b;
	public:
		void getdata(int x,int y)
		{
			a=x;
			b=y;
		}
		Complex operator + (Complex C)
		{
			Complex temp;
			temp.a=a+C.a;
			temp.b=b+C.b;
			return temp;
		}
		void showdata()
		{
			cout<<"Real = "<<a<<endl;
			cout<<"Imaginary = "<<b<<endl;
		}
};
int main()
{
	Complex C1,C2,C3;
	C1.getdata(25,35);
	C2.getdata(65,76);
	//C3=C1+C2;
	C3=C1.operator+(C2);
	C3.showdata();
	return 0;
}
