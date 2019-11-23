#include<stdio.h>//amardeep saha
int main()
{
    float q,b,c,d,e,f;
    char i;
 scanf("%c",&i);
printf("enter two numers");
scanf("%f%f",&q,&b);


switch (i)
{

   case 'a':
    c=q+b;
    printf("%f  is the sum",c);
   break;
   case 's' :
    d=q-b;
    printf("%f  is the subtraction",d);
    break;
    case'm' :
    e=q*b;
    printf("%f  is the multiplication",e);
  break;
    case 'd' :
    f=q/b;
    printf("%f  is the division",f);
    break;
}



 return 0;
}
