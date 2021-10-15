#include <stdio.h>

struct cookies {
   char type[15];
   int num;
};

void printcookies(struct cookies c){
  printf("Today, I ate %d %s cookies", c -> num, c -> type);
}

int main() {

}
