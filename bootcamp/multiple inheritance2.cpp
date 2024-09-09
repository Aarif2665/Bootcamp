#include<iostream>
using namespace std;
class vehicle
{
 public:
 vehicle()
 {
 cout<<"this is vehicle\n";
 }
};
class fourwheeler
{
	public:
	fourwheeler()
	{
	cout<<"this is fourwheeler\n";
	}
};
class car:public vehicle,public fourwheeler
{
	
};
int main()
{
	car obj;
	return 0;
}
