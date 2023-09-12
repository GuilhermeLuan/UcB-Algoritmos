#include <stdio.h>

int main(){
    //While -> Não sei quantas vezes irei repetir alguma coisa
    int nota;
    do
    {
        printf("Insira uma nota positiva: ");
        scanf("%d", &nota);
    } while (nota < 0);
    


   // while (1)
  //  {
     //   printf("Insira uma nota positiva: ");
//  /      scanf("%d", &nota);
//
    //    if (nota > 0)
    //    {
    //        break;
    //    }
    //    
    //}

    printf("Nota lida: %d\n", nota);
    


    //For -> Sei quantas vezes irei repetir
    for (int i = 0; i <= 2; i++){
        printf("Mensagem!\n");
    }
}