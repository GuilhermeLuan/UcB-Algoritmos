#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("teste.txt", "r");

    if(f == NULL){
        printf("ERRO!");
        return 1;
    }


    fclose(f);
    return 0;
}
