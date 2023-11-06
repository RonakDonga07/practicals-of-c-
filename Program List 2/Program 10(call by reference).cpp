#include<iostream>
using namespace std;
int swap(int &,int &);
int main()
{
	int a=10,b=20;
	cout<<"A Before Swapping :: "<<a<<endl;
	cout<<"B Before Swapping :: "<<b<<endl<<endl;
	swap(a,b);
	return 0;
}
int swap(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	cout<<"A After Swapping = "<<x<<endl;
	cout<<"B After Swapping = "<<y;
	return 0;
}
