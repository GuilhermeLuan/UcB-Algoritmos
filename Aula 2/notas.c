#include<stdio.h>

int main(){
    int n1, n2;
    printf("Digite dois numeros: \n");

    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("A soma do numero foi: %d\n", somarNumeros(n1, n2));

    if(n1 > n2){
        printf("%d é o maior número", n1);
    }
    else{
        printf("%d é o maior numero", n2);
    }
}

int somarNumeros(int n1, int n2){
    return n1 + n2;
}
