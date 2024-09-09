#include<iostream>
using namespace std;
class A
{
 public:
 int a,b,c;
 public:
 void sum1()
 {

 	c=a+b;
 	cout<<c;
 }
};
int main()
{
 A obj;
 obj.a=34;
 obj.b=23;
 obj.sum1();
 return 0;
}
