#include <stdio.h>
#include <string.h>

int main(){

    //fget
    char str2[10];
    fgets(str2, 10, stdin);

    //Manipulação de String.
        //Tamanho de Um String
    printf("Tamanho da String: %d\n", strlen(str2) );
        //Coloar uma string no lugar da outra.

    char str5[30];
    char str4[4] = "abc";
    strcpy(str5, str4);
    printf("%s, %s\n", str5, str4);

        //Concatenar String
    strcat(str2, str4);
    printf("%s\n", str2);
        //Comparar String.
    char s1[5] = "abc";
    char s2[5] = "abc";

    printf("%d\n", strcmp(s1,s2));

    return 0;
}