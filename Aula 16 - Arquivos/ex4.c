#include <stdio.h>

//fputs -> projeto final
//fprinf -> projeto final
int main(){
    FILE *f;
    f = fopen("teste.txt", "w");
    int v[5] = {1, 2, 3, 4, 5}, v1[5];

    if(f == NULL){
        printf("ERRO!");
        return 1;
    }
    fwrite(v, sizeof (int), 5, f);
    fclose(f);

    f = fopen("teste.txt", "r");
    if(f == NULL){
        printf("ERRO!");
        return 1;
    }
    fseek(f, 2* sizeof(int), SEEK_SET);
    fread(v1, sizeof (int), 5, f);
    for (int i = 0; i < 5; ++i) {
        printf("v1[%d] = %d\n", i,v1[i]);
    }
    return 0;
}
