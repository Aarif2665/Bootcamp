#include<iostream>
using namespace std;
class A
{
 public:
 	int a,b,c; 
 	void fun1()
 	{
 	a=8;
	b=10;
	c=a+b;
	cout<<c;
	}
};
int main()
{
	A obj;
	obj.fun1();
	return 0;
}
