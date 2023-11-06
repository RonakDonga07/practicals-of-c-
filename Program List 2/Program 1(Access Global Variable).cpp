#include<iostream>
using namespace std;
int m=10;
int main()
{
	int m=20;
	cout<<"Value Of Local Variable m is  :: "<<m<<endl;
	cout<<"Value Of Global variable m is :: "<<::m;
	return 0;
}
