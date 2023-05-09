#include <stdio.h>
#include <stdlib.h> 
#include <time.h>
#include <conio.h>

int main() {
  int A[10];
  srand(time(NULL));

  for (int i = 0; i < 10; i++) {
    A[i] = rand() % 100;
  }

  printf("Los numeros al reves son\n");
  for (int i = 9; i >= 0; i--) { 
    printf("%d ", A[i]); 
  }

  return 0;
}
