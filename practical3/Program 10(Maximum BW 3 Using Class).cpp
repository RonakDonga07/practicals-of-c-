#include<iostream>
using namespace std;
class Max
{
	int a=10,b=20,c=30;
	public:
		void findmax()
		{
			if(a>b && a>c)
				cout<<a<<" Is Maximum"<<endl;
			else if(b>c)
				cout<<b<<" Is Maximum"<<endl;
			else
				cout<<c<<" Is Maximum"<<endl;
		}
};
int main()
{
	Max M;
	M.findmax();
	return 0;
}
