#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int i,min;
    for(i=0;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<min;
    return 0;
}