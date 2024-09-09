#include<iostream>
using namespace std;
int main()
{
    int n,i,a=0;
    cout<<"n is size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        a=a^arr[i];
    }
    cout<<a;

    return 0;
}