#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    //Alocacao dimamica string
    char *string;
    string = (char*) malloc(10);

    strcpy(string, "hello");
    printf("%s\n", string);

    //Alocacao dinamica int
    int *v;
    v = (int*) malloc(5* sizeof(int)); //MEU NOME É MALLOC
    if(v == NULL){
        printf("SEM MEMORIA\n");
        return 0;
    }

    for (int i = 0; i < 4; ++i) {
        scanf("%d", &v[i]);
        printf("%d\n", v[i]);
    }

    return 0;
}