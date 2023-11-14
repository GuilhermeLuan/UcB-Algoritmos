#include <stdio.h>
#include <stdlib.h>

struct Cadastro{
    char nome[50];
    int idade;
    char endereco[100];
};

void funcao(int n){
    int *array;

    array = (int *) malloc(n* sizeof(int));
    for (int i = 0; i < n; ++i) {
        scanf("%d", &array[i]);
    }
}

int main(){
    struct Aluno aluno = {"UC23200423", "Guilherme Luan", 10, 8 ,10};

    printf("%llu", sizeof(aluno));


    return 0;
}