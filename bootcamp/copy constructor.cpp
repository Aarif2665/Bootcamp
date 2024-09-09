#include<iostream>
using namespace std;
class A
{
	int x,y;
	public:
	A(int a,int b)
	{
	 x=a;
	 y=b;
	 cout<<x<<y;
	}
	A(A &ref)
	{
	x=ref.x;
	y=ref.y;
	cout<<x<<y;
	}
};
int main()
{
A obj(10,20);
A obj1=obj;
return 0;
}
