#include <stdio.h>

int main(){
    int num1 = 10, num2 = 20, *p1, *p2, *maiorEndereco;

    p1 = &num1;
    p2 = &num2;

    
    if (p1 > p2){
        maiorEndereco = p1;
    }
    else{
        maiorEndereco = p2;
    }

    printf("%p", maiorEndereco);


}