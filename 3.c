//RMcoder09
#include<stdio.h>
int main()                                 //program3
{
    float f;
    printf("Enter temperature in farenheit\n");
    scanf(" %f",&f);
    float c=((f-32)*5/9);
    printf("Temperature in celcius=\n");
    printf(" %0.2f",c);
}
