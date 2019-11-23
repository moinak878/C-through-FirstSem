//RMcoder09
#include<stdio.h>
int main()                             //program8
{
    int n,nc,val=0;;
    printf("Enter number\n");
    scanf("%d",&n);
    nc=n;
    while(nc>0)
    {
        int d=nc%10;
        nc=nc/10;
        val=val+(d*d*d);
    }
    if(val==n)
        printf("Armstrong number");
    else
        printf("Not an armstrong number");
}
