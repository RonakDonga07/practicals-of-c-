#include<iostream>
using namespace std;
struct employee
{
	private:
		char emp_name[30],emp_branch[30];
		int emp_code,emp_salary;
	public:
		void getdata()
		{
			cout<<"Enter Branch Name :: ";
			cin>>emp_branch;
			cout<<"Enter The Employee Code :: ";
			cin>>emp_code;
			cout<<"Enter Employee Name :: ";
			cin>>emp_name;
			cout<<"Enter Employee Salary :: ";
			cin>>emp_salary;
		}
		void putdata()
		{
			cout<<endl<<"Given Details Are :: "<<endl;
			cout<<"Branch Name Is :: "<<emp_branch<<endl;
			cout<<"Employee Code IS :: "<<emp_code<<endl;
			cout<<"Employee Name Is :: "<<emp_name<<endl;
			cout<<"Employee Salary Is :: "<<emp_salary<<endl;
		}
};
int main()
{
	employee E;
	E.getdata();
	E.putdata();
	return 0;
}
