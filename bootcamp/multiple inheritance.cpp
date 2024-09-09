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
};
int main()
{
	car obj;
}
