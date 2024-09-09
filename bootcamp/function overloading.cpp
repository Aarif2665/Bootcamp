#include<iostream>
using namespace std;
class example
{
 public:
 	int a,b;
 	void func1(int a1)
 	{
 	cout<<a1;
	 }
  void func2(int a2,int a3)
  {
   cout<<a2<<a3;
  }
};
int main()
{
example e1;
e1.a=10;e1.b=20;
e1.func1(e1.a1);
e1.func2(e1.a2,e1.a3);
return 0;
}
