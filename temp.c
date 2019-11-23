#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI (3.14)
int main()
{
    float r;
    printf("Enter temperature in fahrenheit  :");
    scanf("%f",&r);
    float c=(r-32)/9*5;
    printf("\ntemperature in celcius : %f", c);
    return 0;
}
