/*
//version 1 
#include<stdio.h>
#include<conio.h>
#include<math.h>
void gcd(int a , int b , int prev_rem){
    if(prev_rem==0)
    return;
    if(a%b!=0)
        gcd(b, a%b , a%b);
    else{
    printf("%d",prev_rem);
    exit(0);}
}
int main()
{   int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
  gcd(a,b,1);
    return 0;
}*/

//version 2 with minor changes

#include<stdio.h>
#include<conio.h>
#include<math.h>
int gcd(int a , int b , int prev_rem){
    int ans;
    if(a%b!=0)
        ans=gcd(b, a%b , a%b);
else
    ans=prev_rem;

    return ans;
}
int main()
{   int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
  printf("%d ",gcd(a,b,1));
    return 0;
