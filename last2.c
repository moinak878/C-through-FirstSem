//author: RMcoder09
#include<stdio.h>
int main()
{
char c1[100];
printf("Enter  string\n");
scanf(" %s",&c1);
char c3[100];
int l;
int l1=strlen(c1);
for(l=0;l<l1;l++)
    c3[l]=c1[l];
printf("original string:  %s\n",c1);
printf("copied string  :  %s\n",c3);

}
