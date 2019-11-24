//author: RMcoder09
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter a number");
	scanf(" %d",&n);
	for(i=1;i<=n;i++)
	{	int a,b,c;
		for(a=1;a<n-i+1;a++)
			printf("  ");
		for(b=1;b<=i;b++)
			printf("* ");
			for(c=1;c<i;c++)
                printf("* ");
         printf("\n");
	}
	for(i=n-1;i>=1;i--)
	{	int a,b,c;
		for(a=1;a<n-i+1;a++)
			printf("  ");
		for(b=1;b<=i;b++)
			printf("* ");
			for(c=1;c<i;c++)
                printf("* ");
              printf("\n");
	}
	return 0;
}
