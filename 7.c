//RMcoder09
#include<stdio.h>
int main()                              //proggram7
{
    int a,b,i,j;
    printf("Enter two numbers \n");
    scanf(" %d %d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int count=0;
        for(j=1;j<=i;j++)
            if(i%j==0)
                count++;
        if(count==2)
            printf("%d ",i);
    }
}