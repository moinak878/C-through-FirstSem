#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    printf("\n\nValue of 1st variable before swapping : %d\n", a);
    printf("Value of 2nd variable before swapping : %d\n", b);
    printf("============================================\n");
    a=a+b;
    b=a-b; //a+b-b => b->a
    a=a-b; //a+b-a => a->b
    printf("Value of 1st variable after swapping : %d\n",a);
    printf("Value of 2nd variable after swapping : %d\n\n",b);
    return 0;
}
