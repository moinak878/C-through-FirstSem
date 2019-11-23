#include<stdio.h>
#include<math.h>
#include<stdbool.h>

int main(){
int i=0,j=0,k=0;
for(i=1;i<=5;i++){
    for(j=0;j<5-i;j++)
        printf(" ");
    for(k=0;k<2*i-1;k++)
        printf("*");
    printf("\n");
}


for(i=4;i>=1;i--){
    for(j=0;j<5-i;j++)
        printf(" ");
    for(k=2*i-1;k>0;k--)
        printf("*");
    printf("\n");
}

return 0;
}
