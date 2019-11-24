//RMcoder09
#include<stdio.h>
int main()                             //program5
{
    printf("Enter + , - , * , / \n");
    char c;
    int d;
    scanf(" %c",&c);
    printf("Enter two numbers\n");
    int a,b;
    scanf(" %d %d",&a,&b);
    switch (c)
    {
        case '+':
            d =a+b;
            break;
        case '-':
            d=a-b;
            break;
        case '*':
            d=a*b;
            break;
        case '/':
            d=a/b;
            break;
        default:
            printf("Wrong choice");
    }
    printf(" %d",d);
}
