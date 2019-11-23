#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI (3.14)
int main()
{
    int a,b,ch;
    int result=0;
    printf("MENU\n");
    printf("===========================\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("Division\n\n");
    printf("===========================\n");
    printf("Enter your choice : ");
    scanf("%d",&ch);
    printf("\n\nEnter 1st number : ");
    scanf("%d", &a);
    printf("Enter 2nd number : ");
    scanf("%d", &b);

    switch(ch){
case 1:
    printf("After Addition :-\n");
    result=a+b;
    break;
case 2:
    printf("After Subtraction :-\n");
    result=fabs(a-b);
    break;
case 3:
    printf("After Multiplication :-\n");
    result=a*b;
    break;
case 4:
    printf("After Division :-\n");
    result=b/a;
    break;
default:
    printf("No such option!");
    }
    printf("Result = %d", result);
    return 0;
}
