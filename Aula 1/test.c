#include <stdio.h>

int main(){
    int nota1;
    int nota2;
    int nota3;
    int mediaNotas;

    printf("Digite 3 notas\n");

    printf("Nota 1: ");
    scanf("%d", &nota1);

    printf("Nota 2: ");
    scanf("%d", &nota2);

    printf("Nota 3: ");
    scanf("%d", &nota3);

    mediaNotas = (nota1 + nota2 + nota3) / 3;

    printf("Media: %d\n", mediaNotas);

    if(mediaNotas < 7){
        printf("Reprovado! ");
    }
    else if (mediaNotas >= 8)
    {   
        printf("Incrivel!!");
    }
    else{
        printf("Aprovado! ");
    }
    

    return 0;
}