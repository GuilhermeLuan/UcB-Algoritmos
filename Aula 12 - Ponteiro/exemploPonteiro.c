#include <stdio.h>

int main(){
    int v[3] = {1, 2, 3};

    printf("endereco de memoria apontado por v: %p\n", v);
    printf("valor apontado por v (primeiro valor do vetor): %d\n", *v); // v aponta para o endereco de memoria do priemiro valor do array
    printf("endereco de memoria do segundo valor apontado por v: %p\n", v + 1);
    printf("valor apontado por v (segundo valor do vetor): %d\n", *(v + 1));

    return 0;
}