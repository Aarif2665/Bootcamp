#include<iostream>
using namespace std;
class demo
{
  static int a;
 public:
 void getdata()
 {
 	cout<<a<<endl;
 	a++;
 }
 };
 int demo:: a=10;
 int main()
 {
 demo e1,e2;
 e1.getdata();
 e2.getdata();
 return 0;
 }
