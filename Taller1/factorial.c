#include <stdio.h>
#include <time.h>

int factorial(int num){
  int loop = num;
  if(loop == 0 || loop == 1) {
    return 1;
  } else {
    return loop*(factorial(--num));
  }
}

int main() {
  clock_t t_inicial = clock();
  printf("Resultado en C: %d\n", factorial(10));
  printf("El tiempo de ejecucion: %.5f segundos\n", (double)(clock() - t_inicial) / CLOCKS_PER_SEC);
  return 0;
}