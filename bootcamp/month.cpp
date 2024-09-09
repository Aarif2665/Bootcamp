#include<iostream>
#include<string>
using namespace std;
int main()
{
	
	char a[20];
	a == "january";
	cout<<"enter month :";
	cin>>a;
	if(a=="january"||a=="march" || a=="may"||a== "july"||a=="august"|| a== "october" ||a=="december")
	{
		cout<<"it is days of 31"<<endl;
    }
	else if(a =="april" || a=="june" || a =="september" || a=="november")
	{
		cout<<"it is days of 30:"<<endl;
	}
	else if (a == "february")
	{
		cout<<"it is day of only 28 and 29:"<<endl;
	}
    else
	{
		cout<<"it is not month"<<endl;
	}

	return 0;
	
}