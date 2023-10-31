#include <stdio.h>

int main(){
    int c = 5, d = 50;
    int *p, *p1;

    p = &c; // armazena endereco de memória de c em p

    printf("Valor de c: %d\n", c);
    printf("endereco de memoria de c: %p\n", &c);
    printf("Valor de p: %p\n", p);
    *p = 10;
    printf("Valor da variavel c a partir de p: %d\n", *p);

    p1 = p; //p1 recebe o endereco de memoria salve em p(C)
    printf("Valor de p1: %p\n", p1);
    printf("Valor da variavel c a partir de p1: %d\n", *p1);

    p1 = &d;
    *p = *p1; //c = d;
    printf("Valor de c: %d\n", c);


    return 0;
}