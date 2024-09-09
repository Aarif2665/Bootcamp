#include<iostream>
using namespace std;
int main()
{
    int i=0;
    int j=0;
    for(i=0;i<10;i=i+1)
    {
        for(j=0;j<20;j=j+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}