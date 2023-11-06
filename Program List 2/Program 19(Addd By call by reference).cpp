#include<iostream>
using namespace std;
int sum(int &,int &);
int main()
{
	int a,b;
	cout<<"Enter The Value Of A :: ";
	cin>>a;
	cout<<"Enter The Value Of B :: ";
	cin>>b;
	sum(&a,&b);
	return 0;
}
int sum(int &x,int &y)
{
	int sum=0;
	sum=x+y;
	cout<<"Sum Of Both Number = "<<sum<<endl;
	return 0;
}
