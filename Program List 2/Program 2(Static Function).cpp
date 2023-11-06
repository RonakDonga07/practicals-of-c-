#include<iostream>
using namespace std;
class temp
{
	public :
			static int a;
			void display()
			{
				cout<<"Value Of A Is :: "<<a<<endl;
			}
};
int temp::a=10;
int main()
{
	temp t1;
	t1.display();
	return 0;
}
