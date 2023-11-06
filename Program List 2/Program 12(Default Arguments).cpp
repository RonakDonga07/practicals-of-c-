#include<iostream>
using namespace std;
int sum(int a,int b,int c=0,int d=0)
{
	return a+b+c+d;
}
int main()
{
	cout<<"35 + 50            = "<<sum(35,50)<<endl;
	cout<<"35 + 50 + 80       = "<<sum(35,50,80)<<endl;
	cout<<"35 + 50 + 80 + 15  = "<<sum(35,50,80,15)<<endl;
	return 0;
}
