#include<iostream>
using namespace std;
void area(float PI,float r)
{
	float a=PI*r*r;
	cout<<"Area Of Circle = "<<a;
};
int main()
{
	float r;
	const float PI=3.14;
	cout<<"Enter Radius Of Circle :: ";
	cin>>r;
	area(PI,r);
	return 0;
}
