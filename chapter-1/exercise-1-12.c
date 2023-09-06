#include <stdio.h>

#define SPACE ' '
#define TAB '\t'
#define NEWLINE '\n'

#define IN 1
#define OUT 0

int main() {
  int state = OUT;
  int c;
  while ((c = getchar()) != EOF) {
    if (c == SPACE || c == TAB || c == NEWLINE) {
      if (state == IN) {
        putchar(NEWLINE);
      }
      state = OUT;
    } else {
      state = IN;
      putchar(c);
    }
  }
}
