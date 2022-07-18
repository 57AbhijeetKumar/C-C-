#include<iostream>
using namespace std;
class A
{
	int roll;
	float cgpa;	
	public:
		void getdata()
		{
			cout<<"Enter your Roll No:-"<<endl;
			cin>>roll;
			cout<<"Enter Your Marks in CGPA:-"<<endl;
			cin>>cgpa;
		}
		void showdata()
		{
			cout<<"Your Roll No. is:-"<<roll<<endl;
			cout<<"Your Marks is:-"<<cgpa<<" CGPA"<<endl;
		}
}s1,s2;
//void A::getdata()
//void A::showdata()
int main()
{
	s1.getdata();
	s2.getdata();
	s1.showdata();
	s2.showdata();
	return 0;
}
