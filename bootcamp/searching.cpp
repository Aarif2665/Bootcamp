#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int i,flag=0,index=0,target=30;
    for(i=0;i<5;i++)
    {
        if(arr[i]==target)
        {
         index=i;
          flag=1;
        }
        }
       if(flag==1)
       cout<<"found"<<index; 
       else
       cout<<"not found";
    return 0;
}