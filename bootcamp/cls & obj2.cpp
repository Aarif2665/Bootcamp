#include<iostream>
using namespace std;
class demo
{
	public:
 int a,b,c;
 void sum1()
 {
  cin>>a>>b;
  c=a+b;
  cout<<c;
 }
};
int main()
{
 demo obj;
 obj.sum1();
 return 0;
}
