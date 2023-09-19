// Declaração do Array = int notas[4]; -> Arry com 4 lugares
// notas[0] = 3; no indice 0, vai ter o valor 3;

#include <stdio.h>
int main(){
    int notas[4] = {0, 1, 2, 3};
    notas[0] = 3;

    printf("%d", notas[0]);

    return 0;
}