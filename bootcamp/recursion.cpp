#include<iostream>
using namespace std;
 int n=4;
int fact(int n)
{
 if(n==0||n==1)
 return 1;
 else
 return n*fact(n-1);
}
int main()
{

 cout<<fact(n);
 return 0;
}
