#include<iostream>
using namespace std;
class Max
{
	private:
		int num1,num2;
	public:
		void input()
		{
			cout<<"Enter The Number 1 :: ";
			cin>>num1;
			cout<<"Enter The Number 2 :: ";
			cin>>num2;
		}
		int large()
		{
			if(num1>num2)
			{
				return num1;
			}
			else
			{
				return num2;
			}
		}
		void display()
		{
			
		}
};
int main()
{
	
	return 0;
}
