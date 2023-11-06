#include<iostream>
using namespace std;
class Account
{
	public:
		int no,code,bal;
}A;
int main()
{
	A.bal=10000;
	A.code=123456;
	A.no=100;
	cout<<"Balance :: "<<A.bal<<endl;
	cout<<"Code    :: "<<A.code<<endl;
	cout<<"No      :: "<<A.no<<endl;
	return 0;
}
