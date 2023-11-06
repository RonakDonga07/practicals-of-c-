#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float km,m,in,cm,ft;
	cout<<"Enter The Distance In Kilo-Meter :: ";
	cin>>km;
	m=km*1000;
	cm=km*100000;
	in=km*39370.079;
	ft=km*3280.84;
	cout<<"Distance In Meter Will Be :: "<<setprecision(10)<<m<<endl;
	cout<<"Distance In Centi-Meter Will Be :: "<<setprecision(12)<<cm<<endl;
	cout<<"Distance In Inch Will Be :: "<<setprecision(10)<<in<<setw(8)<<endl;
	cout<<"Distance In Feet Will Be :: "<<setprecision(10)<<ft<<setw(8)<<endl;
	return 0;
}
