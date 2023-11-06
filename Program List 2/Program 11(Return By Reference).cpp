#include<iostream>
using namespace std;
int n;
int& fun();
int main()
{
	fun()=10;
	cout<<"Value Return By Reference Is :: "<<n;
	return 0;
}
int& fun()
{
	return n;
}
