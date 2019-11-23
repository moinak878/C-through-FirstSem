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


         c=10*c+b;

     }

     if(c==d)
        printf("its a palindrome");
     else
        printf("its not an palindrome");
     return 0;
}

