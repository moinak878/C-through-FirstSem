//author: RMcoder09
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter number of rows");
	scanf(" %d",&n);
		int a,b,c;
		a=1;
		for(b=1;b<=n;b++)
			{for(c=1;c<b;c++)
                printf("%d ",a++);
                printf("\n");
                         printf("\n");
	}
	return 0;
}
