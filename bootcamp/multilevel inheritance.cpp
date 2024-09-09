#include<iostream>
using namespace std;
class vehicle
{
 public:
 vehicle()
 {
  cout<<"this is a vehicle\n";
 }
};
class fourwheeler:public vehicle
{
	public:
	fourwheeler()
	{
	cout<<"this is fourwheeler\n";
	}
};
class car:public fourwheeler
{
	public:
	car()
	{
	cout<<"this is car\n";
	}
};
int main()
{
	car obj;
	return 0;
}




