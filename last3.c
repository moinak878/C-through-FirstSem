//author: RMcoder09
#include<stdio.h>
int main()
{
char c1[100];
printf("Enter  string\n");
scanf(" %s",&c1);
int l=0,count=0;
while(c1[l++]!='\0')
count++;

printf("Length of the string  :  %d\n",count);

}
