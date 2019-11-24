#include<stdio.h>//amardeep saha
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    b=b+a;
    a=b-a;
    b=b-a;
    printf("%d\n%d",a,b);
    return 0;

}
