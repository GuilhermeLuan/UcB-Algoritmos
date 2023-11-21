#include <stdio.h>

int main(){
    FILE *f;
    f = fopen("teste.txt", "w");

    if(f == NULL){
        printf("ERRO!");
        return 1;
    }

    fputs("primeira linha123\n", f);
    fputs("segunda linha123\n", f);

    fclose(f);
    return 0;
}
