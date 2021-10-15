#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct cookies {
   char type[15];
   int num;
};

void printcookies(struct cookies *c) {
  printf("Today, I ate %d %s cookies\n", c -> num, c -> type);
}

struct cookies * makecookies(char *t, int n) {
  struct cookies *c = malloc(sizeof(struct cookies));
  strcpy(c -> type, t);
  c -> num = n;
  return c;
}

int main() {
  srand( time(NULL) );
  int i = 0;
  for (i = 0; i < 3; i ++) {
    char type[15] = {'C', 'h', 'o', 'c', 'o', 'l', 'a', 't', 'e', (rand()%10)+'a'};
    int num = rand();
    struct cookies *c = makecookies(type, num);
    printcookies(c);
    free(c);
  }
  return 0;
}
