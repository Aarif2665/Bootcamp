#include<iostream>
using namespace std;
class sample
{
 public:
 sample()
 {
 cout<<"he is born"<<endl;
 }
 ~sample()
 {
 cout<<"he is die"<<endl;
 }
};
int main()
{
 sample obj;
 return 0;
}
