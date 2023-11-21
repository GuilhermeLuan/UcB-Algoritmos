#import "multiplicacao.c"
#include <stdio.h>


int soma(int a, int b){
    return a + b;
}
int subtracao(int a, int b){
    return a - b;
}

int main(){

    int numero1, numero2, resultado;
    char operador;

    printf("Digite o operador(+,-,*,/,%%): ");
    scanf("%c", &operador);

    printf("Digite o valor do numero 1: ");
    scanf("%d", &numero1);
 
    printf("Digite o valor do numero 2: ");
    scanf("%d", &numero2);


    if(operador == '*'){
        resultado = multiplicacao(numero1, numero2);
    }

    
    printf("Resultado da: %d\n", resultado);
    
    

    return 0;
}
