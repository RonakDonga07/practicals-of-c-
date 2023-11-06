#include<iostream>
using namespace std;
int inline square(int n)
{
	int s;
	s=n*n;
	cout<<"Square Of "<<n<<" Is :: "<<s;
	return 0;
}
int main()
{
	int n;
	cout<<"Enter Any Number To Find It's Square :: ";
	cin>>n;
	square(n);
	return 0;
}
