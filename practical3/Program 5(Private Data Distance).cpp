#include<iostream>
using namespace std;
class dist
{
	private:
		int feet,inch;
	public:
		void getdata()
		{
			cout<<"Enter The Distance In Feet :: ";
			cin>>feet;
			cout<<"Enter The Distance In Inch :: ";
			cin>>inch;
		}
		void putdata()
		{
			cout<<endl<<"Distance In Feet :: "<<feet<<endl;
			cout<<"Distance In Inch :: "<<inch<<endl;
		}
};
int main()
{
	dist D;
	D.getdata();
	D.putdata();
	return 0;
}
