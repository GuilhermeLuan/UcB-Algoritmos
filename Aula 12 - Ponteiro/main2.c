#include <stdio.h>

int main(){
    int c = 5;
    int *p;

    printf("valor de p: %p\n", p);
    p++;
    printf("valor de p++: %p\n", p);


    return 0;
}