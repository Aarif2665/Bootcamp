#include<iostream>
using namespace std;
int main()
{
    int arr[5],i,j,temp;
    cout<<"enter the elements of arr:"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    cout<<"print of array:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<< arr[i];
    }
    return 0;
}