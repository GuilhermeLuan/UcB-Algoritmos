#include <stdio.h>

int soma(int a, int b){
    return a + b;
}
int subtracao(int a, int b){
    return a - b;
}
int multiplicacao(int a, int b){
    return a * b;
}

int main(){

    //Essas duas formas de incremento são validas.
    //numero 2 = ++numero1; -> Primeiro incremento o valor e salvo na variavel
    //numero 2 = numero1++; -> Primeiro eu atribuo o valor da variavel e depois eu incremento o numero1
    // numero1--;
    // --numero1;

    int numero1, numero2, resultado;
    char operador;

    printf("Digite o operador(+,-,*,/,%%): ");
    scanf("%c", &operador);

    printf("Digite o valor do numero 1: ");
    scanf("%d", &numero1);
 
    printf("Digite o valor do numero 2: ");
    scanf("%d", &numero2);


    if(operador == '+'){
        resultado = soma(numero1, numero2);
    }
    
    printf("Resultado da: %d\n", resultado);
    
    

    return 0;
}
