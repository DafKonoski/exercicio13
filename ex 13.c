//Receber do teclado a sigla do estado de uma pessoa e imprimir.

#include <stdio.h>

int main() {

  char sigla[3];
  
  printf("Digite a sigla do seu Estado:\n");
  gets(sigla);

    printf("%s", sigla);
  
}