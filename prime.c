#include<stdio.h> // error//amardeep saha
int main()
{
    int a,b,c,d,f;
     scanf ("%d",&a/*&b*/);
   /* printf("enter the numbers");
   
    for(c=a;c<=b;c++)
    {
        for(d=2;d<=c-1;d++)
        {
            f=c%d;
        if(f==0)
        break;
        else
        printf("%d ",c );
        break;
        
    }
    }*/
    for (d=1;d<=a;d++)
    {for (b=2;b<=d-1;b++)
    {
        if(d%b==0)
     {break;}
        else
        {
            printf("%d ",d);
          
        }
    }
        
    }


    return 0;
}
