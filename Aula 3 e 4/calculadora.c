#include <stdio.h>

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

    // "+" diferente de '+'
    // String / Char

    if(operador == '+'){
        resultado = numero1 + numero2;
    }
    else if (operador == '-'){
        resultado = numero1 - numero2;
    }
    else if (operador == '*'){
        resultado = numero1 * numero2;
    }
    else if (operador == '/'){
        resultado = numero1 / numero2;
    }
    else if (operador == '%')
    {
        resultado = numero1 % numero2;
    }
    else {
        printf("Operacao invalida!!\n");
        return 0;
    }
    
    printf("Resultado da: %d\n", resultado);
    
    

    return 0;
}
