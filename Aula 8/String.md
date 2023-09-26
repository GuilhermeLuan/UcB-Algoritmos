# Aula 7 - String
- char str[6]; -> Cria uma string com 6 espações para caracteres
- char str[10] = "Joao";
- Tenho que ter um caracter a mais para representar o fim da String.
- Função gets(str); é usada para ler string. Porem não é recomendavel, uma vez que tem estouro de buffer.
- Função fgets(); é melhor.
- Função fputs(); pode ser usada no lugar do prinft
## Manipulação de String.
- strlen(str); -> Retorna o tamanho da String
- strcpy(char - de origem, char - de origem); -> Copia string 
- strcat() -> Concatenar String.
- strcmp(s1,s2) -> Verifica se as strins são iguais.