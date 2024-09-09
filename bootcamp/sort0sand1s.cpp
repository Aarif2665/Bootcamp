#include<iostream>
using namespace std;
int main()
{
    int arr[15]={1,0,0,1,1,0,1,0,1,1,1,0,0};
    int i,j,count=0,countone=0;
    for(i=0;i<13;i++)
    {
        if(arr[i]==0)
         count++;
         if(arr[i]==1)
         countone++;
    }
    //cout<<count<<" "<<countone;
    for(i=0;i<count;i++)
    {
        arr[i]=0;
        cout<<arr[i];
    }
    for(j=count;j<13;j++)
    {
       arr[j]=1;
       cout<<arr[j];
    }
    return 0;
}