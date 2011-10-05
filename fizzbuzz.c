#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv) {
  int i, start=1, stop=100;
  for (i=start; i<=stop; i++) {
    if ((i % 3) == 0 && (i % 5) == 0)
      printf("FizzBuzz,");
    else if ((i % 3) == 0)
      printf("Fizz,");
    else if ((i % 5) == 0)
      printf("Buzz,");
    else
      printf("%d,", i);
  }
  printf("\n");
  return 0;
}

