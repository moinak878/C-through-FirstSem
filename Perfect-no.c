#include<stdio.h>
/*amardeep saha*/
int main()
{
    int a,i,b=0;
    scanf("%d",&a);
    for(i=1;i<=a-1;i++)
    {
          if(a%i==0)
          b=b+i;
    }
    if(b==a)
    printf("it is a perfect number");
    else
        printf("its not");
    
return 0;
}