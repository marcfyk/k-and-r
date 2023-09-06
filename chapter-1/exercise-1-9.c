#include <stdio.h>

#define SPACE ' '

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    putchar(c);
    if (c == SPACE) {
      while ((c = getchar()) != EOF && c == SPACE)
        ;
      if (c != EOF) {
        putchar(c);
      }
    }
  }
}
