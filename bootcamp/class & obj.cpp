#include<stdio.h>
int main()
{
	int n;
		int i,j;
	scanf("%d",n);

	for(i=0;i<n;i++)
	{
	for(j=0;j<=i;j++)
	{
		
		if(j==0||j==i||j==n-1)
		{
			printf("*");
		}
		else
		{
			printf("  ");
		}
     	}
   }
   return 0;
}