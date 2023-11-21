#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("teste.txt", "r");
    char linha[30];

    if(f == NULL){
        printf("ERRO!");
        return 1;
    }

    while (fgets(linha, 30, f)){
        printf("%s", linha);
    }

    fclose(f);
    return 0;
}
