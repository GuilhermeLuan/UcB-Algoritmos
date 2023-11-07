#include <stdio.h>

void multiplicaValorPor2(int valor){
    valor = valor * 2;
}


int main(){
    int a = 10;

    printf("valor de a: %d\n", a);
    multiplicaValorPor2(a);
    printf("valor de a: %d\n", a);

    return 0;
}