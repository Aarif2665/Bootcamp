#include<iostream>
using namespace std;
class B;
class A
{
 int a;
 public:
 	void setval1()
  {
  	cin>>a;
  }
  friend void max(A,B);
};
class B
{
	int b;
	public:
	void setval2()
	{
		cin>>b;
	}
	friend void max(A,B);
};
void max(A o,B o1)
{
 if(o.a>o1.b)
 cout<<o.a<<"     is greater"<<endl;
 else
 cout<<o1.b<<"     is greater"<<endl;
}
int main()
{
 A obj1;
 B obj2;

 
 obj1.setval1();
 obj2.setval2();
 max(obj1,obj1);


return 0;
}


