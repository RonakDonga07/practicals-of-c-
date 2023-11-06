#include<iostream>
using namespace std;
int a=10;
int b=20;
int main()
{
	int sum=0;
	sum=::a+::b;
	cout<<"Sum Of A & B is :: "<<sum;
	return 0;
}
