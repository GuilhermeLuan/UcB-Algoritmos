#include <stdio.h>
#include <stdlib.h>


int main(){
    int tamanhoArray;
    int *array;
    printf("Insira o tamanho do array: ");
    scanf("%d", &tamanhoArray);


    printf("Digite os valores do array: ");
    array = (int *) malloc(tamanhoArray* sizeof(int));
    for (int i = 0; i < tamanhoArray; ++i) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < tamanhoArray; ++i) {
        printf("%d ", array[i]);
    }
    return 0;
}