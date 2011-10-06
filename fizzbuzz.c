#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv) {
  int i, start=1, stop=100;
  if (argc > 1)
    start=atoi(argv[1]);
  if (argc > 2)
    stop=atoi(argv[2]);
  for (i=start; i<=stop; i++) {
    int m = ((i % 3) == 0) && (printf("Fizz") || 1);
    m |= ((i % 5) == 0) && (printf("Buzz") || 1);
    if (!m) printf("%d", i);
    if (i != stop) printf(",");
  }
  printf("\n");
  return 0;
}

