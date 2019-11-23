#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int a){
    int f=1;
    if(a<=1)
        f=1;
    else
        f=a*fact(a-1);

return f;
}
int main()
{   int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    printf("Factorial of %d : %d ",a,fact(a));
    return 0;
}