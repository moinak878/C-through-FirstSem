#include<stdio.h>

int main(){
    int i=0;
    char arr[][5]={"zero","one","two","three","four","five","six","seven","eight","nine"};
   int n,num=0;
   printf("Enter a number : ");
   scanf("%d",&n);
   while(n!=0){
    num=num*10+(n%10);
    n=n/10;
   }
   n=num;

   while(n!=0){
    for(i=0;i<5;i++)
        printf("%c",arr[n%10][i]);
        printf(" ");
    n=n/10;
   }
return 0;
}
