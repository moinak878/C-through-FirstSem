#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isArm(int a){
    int b=a;

    int sum=0;

   while(a!=0){

     int x=a%10;
   float b2=pow(x,3);
    //printf("%f ",pow(x,3));
     sum=sum+(int)b2;
    // printf("%d ",sum);
     a/=10;
   }
   // printf("%d",sum);
   if(sum==b)

       return true;

   return false;
}
int main()
{   int a;
    printf("Enter a number : ");
    scanf("%d",&a);
    if(isArm(a))
    printf("Armstrong!");
    else
        printf("Not Armstrong !");
    return 0;
}
