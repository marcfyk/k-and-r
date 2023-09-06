#include <stdio.h>

#define SPACE ' '
#define TAB '\t'
#define NEWLINE '\n'

int main() {
  int blank_count = 0;
  int tab_count = 0;
  int newline_count = 0;

  int c;
  while ((c = getchar()) != EOF) {
    if (c == SPACE) {
      ++blank_count;
    }
    if (c == TAB) {
      ++tab_count;
    }
    if (c == NEWLINE) {
      ++newline_count;
    }
  }

  printf("blanks: %d, tabs: %d, newlines: %d\n", blank_count, tab_count,
         newline_count);
}
