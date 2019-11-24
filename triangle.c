//RMcoder09
#include<stdio.h>
int main()                        //program6
{
    printf("Enter the sides of triangle\n");
    int a,b,c;
    scanf(" %d %d %d",&a,&b,&c);
    if(a==b&&a==c)
        printf("Equilateral triangle");
    else if(a==b||b==c||c==a)
        printf("Isosceles triangle");
    else
        printf("Scalene triangle");
}
