//author: RMcoder09
#include<stdio.h>
#include<string.h>
int main()
{
char c1[100];
char c2[100];
printf("Enter two strings\n");
scanf(" %s",&c1);
scanf(" %s",&c2);
int val=0,l;
int l1=strlen(c1);
int l2=strlen(c2);
int m=l1>l2?l1:l2;
for(l=0;l<m;l++)
val+=(int)(c2[l]-c1[l]);
printf("%d",val);

}
