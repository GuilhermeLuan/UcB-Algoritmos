#include <stdio.h>

int main(){
    int nota1, nota2, nota3, mediaNotas;

    printf("Digite 3 notas\n");

    printf("Nota 1: ");
    scanf("%d", &nota1);

    printf("Nota 2: ");
    scanf("%d", &nota2);

    printf("Nota 3: ");
    scanf("%d", &nota3);

    mediaNotas = (nota1 + nota2 + nota3) / 3;

    

    if(mediaNotas == 8){
        printf("Parabens! bonus de 1 ponto!\n");
        mediaNotas++;
    } else if (mediaNotas == 9)
    {
        printf("Parabens! bonus de 1 ponto!\n");
        mediaNotas++;
    }

    printf("Media: %d\n", mediaNotas);

    if (mediaNotas < 7){
        printf("Reprovado!\n");
    } 
    else if(mediaNotas > 8){
        printf("Espetacular!");
    } 
    else if (mediaNotas > 9){
        printf("Tu e o bixao mesmo hein");
    } else{
        printf("Aprovado!\n");
    }
    

    return 0;
}
