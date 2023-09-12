#include <stdio.h>

int main(){
    int mes;
    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        printf("January");
        break;
    case 2:
        printf("February");
        break;
    default:
        printf("Entrada invalida");
        break;
    }
}