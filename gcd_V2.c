
#include<stdio.h>//amardeep saha
int main()
{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    c=HCF(a,b);
    printf("hcf=%d",c);
    return 0;
}
int HCF(int a,int b)
{
    if(b>a){b=b+a;a=b-a;b=b-a;}
     int c;
      c=a%b;
    if(c!=0)

     HCF(b,c);
    else
        return b;


}
