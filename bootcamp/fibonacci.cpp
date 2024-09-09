#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d,fibanacci(i)");
    }
    return 0;

}
int fibonacci(int n)
{
    if(n==1 ||n==0)
    return 1;
    else
    return fibanacci(n-2)+fibonacci(n-1);
}
