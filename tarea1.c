#include <stdio.h>
#include <string.h>

int main() {
  char palabra[50];
  int i, longitud, palindromo;

  printf("Ingrese una palabra: ");
  scanf("%s", palabra);

  longitud = strlen(palabra);

  palindromo = 1;
  for (i = 0; i < longitud / 2; i++) {
    if (palabra[i] != palabra[longitud - i - 1]) {
      palindromo = 0;
      break;
    }
  }

  if (palindromo) {
    printf("%s es un palíndromo.\n", palabra);
  } else {
    printf("%s no es un palíndromo.\n", palabra);
  }

  return 0;
}