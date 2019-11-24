//author: RMcoder09
#include<stdio.h>
int main()
{
    int arr[1000];
    printf("Enter number of elements  ");
    int n,i,el;
    scanf(" %d",&n);
    printf("Enter elements   ");
    for(i=0;i<n;i++)
        scanf(" %d",&arr[i]);
    printf("Enter element to search  ");
    scanf(" %d",&el);
    int a,f=0;;
    for(a=0;a<n;a++)
    {
        if(arr[a]==el)
        f=1;
    }
    if(f==0)
    printf("Not found");
    else
    printf("Found");
    return 0;
}
