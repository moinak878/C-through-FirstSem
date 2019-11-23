#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI (3.14)
int main()
{
    int r;
    printf("Enter an year :");
    scanf("%d",&r);
    if(r%4==0)
    printf("Its a Leap Year!\n");
    else
        printf("It is not a leap year!\n");
    return 0;
}
