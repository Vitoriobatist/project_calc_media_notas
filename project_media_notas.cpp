#include <stdio.h>
#include <stdlib.h>

int main(void) {
  system("clear"); // limpar
  float N1, N2, M; // notas e media
  printf("entre com a primeira nota:");
  scanf("%f", &N1);
  printf("entre com a segunda nota:");
  scanf("%f", &N2);
  M = (N1 + N2) / 2;
  printf("a media é %.2f\n", M); // 2 antes do F = numero de casas decimais 

  return 0;
}
