/*print the following the pattern*/
/*
*
**
***
****
*/
#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter the total no of rows");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
