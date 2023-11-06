#include<iostream>
using namespace std;
class Employee
{
	private:
		int id;
		char name[20];
	public:
		getdata()
		{
			cout<<"Enter The Id Number Of Employee :: ";
			cin>>id;
			cout<<"Enter The Name Of Employee :: ";
			cin>>name;
		}
		putdata()
		{
			cout<<endl<<"Employee Id :: "<<id<<endl;
			cout<<"Employee Name :: "<<name<<endl;
		}
};
int main()
{
	Employee emp;
	emp.getdata();
	emp.putdata();
	return 0;
}
