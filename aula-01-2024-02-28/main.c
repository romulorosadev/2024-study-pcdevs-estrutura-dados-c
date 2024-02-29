// EXERCÍCIO
// 1) Solicitar e armazenar o nome do usuário
// 2) Solicitar e armazenar 3 notas
// 3) Calcular a média e armazenar
// 4) Exibir nome, as 3 notas e a média

#include <stdio.h>

int main()
{
  char inNome[100];
  float inNota1, inNota2, inNota3, outMedia;

  printf("Digite nome: ");
  scanf("%s", &inNome);

  printf("Digite nota 1: ");
  scanf("%2f", &inNota1);

  printf("Digite nota 2: ");
  scanf("%2f", &inNota2);

  printf("Digite nota 3: ");
  scanf("%2f", &inNota3);

  outMedia = (inNota1 + inNota2 + inNota3) / 3;

  printf("\n--------------------");
  printf("\nNOME:   %s", inNome);
  printf("\n--------------------");
  printf("\nNOTA 1: %2f", inNota1);
  printf("\nNOTA 2: %2f", inNota2);
  printf("\nNOTA 3: %2f", inNota3);
  printf("\n--------------------");
  printf("\nMÉDIA:  %2f", outMedia);
  printf("\n--------------------");
}
