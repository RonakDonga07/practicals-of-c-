#include<iostream>
using namespace std;
#define PI 3.14;
int area(float,float);
int area(int);
int area(float);
int main()
{
	float len,bre,r;
	int side;
	cout<<"This Program Is For Finding Area Of Basic Shapes Like Rectangle , Square , Circle :) "<<endl;
	cout<<"Enter The Values To Find Area Of Rectangle :: "<<endl;
	cout<<"Enter The Length :: ";
	cin>>len;
	cout<<"Enter The Bredth :: ";
	cin>>bre;
	cout<<"Area Of Rectangle :: "<<area(len,bre)<<endl;
	cout<<"Enter The Side Of Square :: ";
	cin>>side;
	cout<<"Area Of Square Is :: "<<area(side)<<endl;
	cout<<"Enter The Radius Of Circle :: ";
	cin>>r;
	cout<<"Area OF Circle Is :: "<<area(r)<<endl;
	return 0;

}
int area(len,bre)
{
	return len*bre;
}
int area(side)
{
	return side*side;
}
int area(r)
{
	return PI*r*r;
}
