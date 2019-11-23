#include<stdio.h>//amardeep saha
int main()
{
    int a,b,c=0,d;
     scanf("%d",&a);
     d=a;
     for(;a>0;)
     {

         b=a%10;
           a=a/10;


         c=c+(b*b*b);

     }

     if(c==d)
        printf("its a armstrong");
     else
        printf("its not an armstrong");
     return 0;
}
