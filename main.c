#include <stdio.h>
#include "silniafunkcje.h"
#include "silniarekurencyjnie.h"

int main() {
  int liczba;

  printf("Podaj liczbe: ");
  scanf(" %d", &liczba);

  silnia = silniaint(liczba);
  printf("Silnia z liczby %d typu int to : %d", liczba, silnia);

  silnia = silnialong(liczba);
  printf("\nSilnia z liczby %d typu long to : %d", liczba, silnia);

  silnia = silnialonglong(liczba);
  printf("\nSilnia z liczby %d typu longlong to : %d", liczba, silnia);

  silnia = silniarekurencyjnie(liczba);
  printf("\nSilnia z liczby %d uzywajac rekurencji tp : %d", liczba, silnia);
  
  return 0;
}

