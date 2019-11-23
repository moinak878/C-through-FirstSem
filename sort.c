//author: RMcoder09
#include<stdio.h>
int main()
{
    int arr[1000];
    printf("Enter number of elements  ");
    int n,i;
    scanf(" %d",&n);
    printf("Enter elements   ");
    for(i=0;i<n;i++)
        scanf(" %d",&arr[i]);
    int a,b;
    for(a=0;a<n;a++)
    {
        for(b=a;b<n;b++)
        {
            if(arr[a]>arr[b])
            {
                int temp=arr[a];
                arr[a]=arr[b];
                arr[b]=temp;
            }
        }
    }
    int c;
    printf("Array after sorting:  \n");
    for(c=0;c<n;c++)
        printf("%d  ",arr[c]);
    return 0;
}
