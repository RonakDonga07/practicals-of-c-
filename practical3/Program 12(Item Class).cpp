#include<iostream>
using namespace std;
class Item
{
	private:
		int number,cost;
	public:
		void getdata();
		void putdata()
		{
			cout<<endl<<"The Number Of Items Is :: "<<number;
			cout<<endl<<"The Cost Of Item Is :: "<<cost;
		}
}I;
void Item::getdata()
{
	cout<<"Enter The Number Of Items :: ";
	cin>>number;
	cout<<"Enter The Cost Of Item :: ";
	cin>>cost;
}
int main()
{
	I.getdata();
	I.putdata();
	return 0;
}
