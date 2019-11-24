#include<stdio.h>//amardeep saha
int main()
{ 

    int a,c;
    scanf("%d",&c);
    a=fact(c);
    printf("%d",a);
    return 0;
}
int fact(int a)
{
    int d;
    if(a>0)
    {d=a*fact(a-1);
    return d;}
    else
     return 1;
    
}