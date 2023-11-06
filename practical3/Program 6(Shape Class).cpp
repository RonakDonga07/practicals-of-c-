#include <iostream>
using namespace std;
class shape
{
	public:
		int height=10,base=5;
    	void display();
};
void shape::display() { cout<<height<<endl; cout<<base; }
int main()
{
    shape S;
    S.display();
    return 0;
}
