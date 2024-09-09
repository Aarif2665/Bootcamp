/*no argument no return value
#include<iostream>
using namespace std;
void sum1()
{
 int a,b,c;
 cout<<"enter the number"<<endl;
 cin>>a>>b;
 c=a+b;
 cout<<c;
}
int main()
{
 sum1();
 return 0;
}*/
//no argument return value
#include<iostream>
using namespace std;
int sum1()
{
 int a=10,b=20;
 return a+b;
}
int main()
{

 cout<<sum1();
 return 0;
}

