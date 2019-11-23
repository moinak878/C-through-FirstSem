#include<stdio.h>

struct cmplx{
int re;
int im;
};

int main(){
    struct cmplx first; 
    struct cmplx second;
    first.re = 2;
    second.re =3;

    first.im=3;
    second.im=2;

    int re_add = first.re + second.re;
    int im_add = first.im + second.im;
    printf("Addition = %d + %d i",re_add,im_add);
    return 0;
}
