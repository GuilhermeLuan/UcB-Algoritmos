#include <stdio.h>
struct Aluno{
    char matricula[11];
    char nome[50];
    double notas[3];
};

int main(){
    struct Aluno aluno = {"UC23200423", "Guilherme Luan", 10, 8 ,10};

    printf("%llu", sizeof(aluno));


    return 0;
}