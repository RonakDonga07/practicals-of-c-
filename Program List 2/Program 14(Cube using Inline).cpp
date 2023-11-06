#include<iostream>
using namespace std;
int inline cube(int n)
{
	int c;
	c=n*n*n;
	cout<<"Cube Of "<<n<<" Is :: "<<c;
	return 0;
}
int main()
{
	int n;
	cout<<"Enter Any Number To Find It's Cube :: ";
	cin>>n;
	cube(n);
	return 0;
}
