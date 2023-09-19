// Matriz -> conjuto de vetores
#include <stdio.h>

int main(){
    double notas[2][4];

    for (int linha = 0; linha <= 1; linha++)
    {
        printf("Insira as 4 notas do %d aluno:\n", linha + 1);
        for (int coluna = 0; coluna <=3; coluna++){
            printf("Nota %d: ", coluna + 1);
            scanf("%lf", &notas[linha][coluna]);
        }

    }
    
    for (int linha = 0; linha <= 1; linha++){
         printf("Notas do aluno %d: \n", linha + 1);
        for (int coluna = 0; coluna <=3; coluna++){
        printf("Nota %d: %.2lf\n",coluna +1, notas[linha][coluna]);}
    }

    return 0;
}