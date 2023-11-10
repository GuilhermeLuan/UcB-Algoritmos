# Aula 14 - Alocação dinamica
* Criar variáveis em tempo de execuçâo.
* Quantidade de memória é alocada sob demanda.
### malloc(int);
* `string = (char*) malloc(10);`
* `p = (int *) malloc(50*sizeof(int));` 
* Ela aloca uma quantidade espeficica de bytes na mémoria
* O malloc retorna um void, sendo assim, ele precisa ser convetido
* O `(char*)` converte o malloc
* Se não tiver memória suficiente a função `malloc()` returna `NULL`
* exit(1);
### calloc()
* `p = (int*) calloc(50, sizeof(int))`;
* Aloca memória, recebe o tamanho e dps o numero de bytes.
* Alem disso, apaga o que esta salvo na memória.
### realloc()
* Aumenta ou diminui o tamanho do array.
### free()
* Libera a memória alocada.

## Alocação de struct
* 