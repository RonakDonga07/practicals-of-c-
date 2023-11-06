#include<iostream>
using namespace std;
class Product
{
	private:
		int id,price;
		char name[20];
	public:
		void getdata()
		{
			cout<<"Enter Product ID :: ";
			cin>>id;
			cout<<"Enter Product Name :: ";
			cin>>name;
			cout<<"Enter Unit Price :: ";
			cin>>price;
		}
		void putdata()
		{
			cout<<"Product ID Is :: "<<id<<endl;
			cout<<"Product Name Is :: "<<name<<endl;
			cout<<"Unit Price Is :: "<<price<<endl;
		}
};
int main()
{
	Product P,Q;
	cout<<"Enter Values For Object P :: "<<endl;
	P.getdata();
	cout<<"Enter Values For Object Q :: "<<endl;
	Q.getdata();
	cout<<endl<<"Values Of Object P :: "<<endl;
	P.putdata();
	cout<<"Values Of Object Q :: "<<endl;
	Q.putdata();
	return 0;
}
