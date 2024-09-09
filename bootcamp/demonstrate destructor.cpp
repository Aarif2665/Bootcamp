#include<iostream>
using namespace std;
class sample
{
 public:
 sample()
 {
 	cout<<"object is born"<<endl;
 }
 ~sample()
 {
 	cout<<"object is die"<<endl;
 }
};
int main()
{
 sample s;
 return 0;
}
