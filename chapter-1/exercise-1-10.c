#include <stdio.h>

#define TAB '\t'
#define TAB_FORMATTED "\\\t"

#define BACKSPACE '\b'
#define BACKSPACE_FORMATTED "\\\b"

#define BACKSLASH '\\'
#define BACKSLASH_FORMATTED "\\\\"

int main() {
  int c;
  while ((c = getchar()) != EOF) {
    int is_replaced = 0;
    if (c == TAB) {
      is_replaced = 1;
      printf(TAB_FORMATTED);
    }
    if (c == BACKSPACE) {
      is_replaced = 1;
      printf(BACKSPACE_FORMATTED);
    }
    if (c == BACKSLASH) {
      is_replaced = 1;
      printf(BACKSLASH_FORMATTED);
    }
    if (is_replaced == 0) {
      putchar(c);
    }
  }
}
