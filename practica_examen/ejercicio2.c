#include <stdio.h>

int factorial(int num) {
  if (num == 1 || num == 0) {
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}

float ejercicio2(float media, int cont, int *contador_final) {
  int numero;
  int auxiliar = 1;

  printf(" dime un número ");
  scanf(" %d", &numero);

  if (numero != 0) {
    printf("numero: %i, prod: %i \n", numero, factorial(numero));

    ejercicio2(numero + media, cont + 1, contador_final);
  } else {

    *contador_final = cont;
    return media / cont;
  }
}

int main() {
  int b;
  float a = ejercicio2(0, 0, &b);

  printf("a = %f b = %d", a, b);
}
