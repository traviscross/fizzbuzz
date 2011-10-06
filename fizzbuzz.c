#include <stdlib.h>
#include <stdio.h>

int main (int argc, char **argv) {
  int i, start=1, stop=100, x=0;
  if (argc > 1)
    start=atoi(argv[1]);
  if (argc > 2)
    stop=atoi(argv[2]);
  for (i=start; i<=stop; i++, x=0) {
    if ((i % 3) == 0) { x=1; printf("Fizz"); }
    if ((i % 5) == 0) { x=1; printf("Buzz"); }
    if (!x) printf("%d", i);
    if (i != stop) printf(",");
  }
  printf("\n");
  return 0;
}

