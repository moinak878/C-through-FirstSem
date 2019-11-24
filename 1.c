//Author:RMcoder09
#include<stdio.h>

int main()                            //program1
{
    int a,b;
    printf("Enter two numbers\n");
    scanf(" %d %d",&a,&b);
    b=a+b;
    a=b-a;
    b=b-a;
    printf("Numbers after swapping\n");
    printf("%d %d",a,b);
}
