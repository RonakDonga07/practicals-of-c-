#include<iostream>
using namespace std;
struct student
{
	private:
		char name[20];
		float per;
		int std;
	public:
		void getdata()
		{
			cout<<"Enter Standard :: ";
			cin>>std;
			cout<<"Enter Student Name :: ";
			cin>>name;
			cout<<"Enter "<<name<<"'s Percentage :: ";
			cin>>per;
		}
		void putdata()
		{
			cout<<"Given Details Are ::: "<<endl;
			cout<<"Standard Is :: "<<std<<endl;
			cout<<"Student Name Is :: "<<name<<endl;
			cout<<"Student's Percentage Is :: "<<per<<endl;
		}
};
int main()
{
	student S;
	S.getdata();
	S.putdata();
	return 0;
}
