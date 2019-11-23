#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI (3.14)
int main()
{
    int r;
    printf("Enter radius of circle :");
    scanf("%d",&r);
    printf("Area of circle : .2%f\n", (PI*pow(r,2)));
    printf("Perimeter of circle : .2%f", (2*PI*r));

    return 0;
}
