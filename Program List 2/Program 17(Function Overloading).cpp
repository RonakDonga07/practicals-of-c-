#include<iostream>
using namespace std;
void size_of(char);
void size_of(int);
void size_of(float);
void size_of(double);
int main()
{
	int a;
	char c;
	float f;
	double d;
	size_of(c);
	size_of(a);
	size_of(f);
	size_of(d);
	return 0;
}
void size_of(char c)
{
	int s;
	s=sizeof(c);
	cout<<"Size Of Char Is :: "<<s<<endl;
}
void size_of(int a)
{
	int s;
	s=sizeof(a);
	cout<<"Size Of Int Is :: "<<s<<endl;
}
void size_of(float f)
{
	int s;
	s=sizeof(f);
	cout<<"Size Of Float Is :: "<<s<<endl;
}
void size_of(double d)
{
	int s;
	s=sizeof(d);
	cout<<"Size Of Double Is :: "<<s<<endl;
}
