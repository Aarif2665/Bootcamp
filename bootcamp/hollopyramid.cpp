#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int j=0;
    for(i=0;i<5;i=i+1)
    {

        for(j=0;j<7;j=j+1)
        {
            if(i==0||j==0||i==4||j==6)
            {
                cout<<"*";
                else
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}