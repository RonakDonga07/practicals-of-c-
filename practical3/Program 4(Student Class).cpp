#include<iostream>
using namespace std;
class student
{
	char name[20];
	int age;
	public:
		void getdata()
		{
			cout<<"Enter Student Name :: ";
			cin>>name;
			cout<<"Enter Age :: ";
			cin>>age;
		}
		void putdata()
		{
			cout<<"Given Details Are ::: "<<endl;
			cout<<"Student Name Is :: "<<name<<endl;
			cout<<"Age Is :: "<<age<<endl;
		}
};
int main()
{
	student S;
	S.getdata();
	S.putdata();
	return 0;
}
