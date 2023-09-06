#include <stdio.h>

#define MAX_WORD_SIZE 20

#define SPACE ' '
#define TAB '\t'
#define NEWLINE '\n'

#define IN 1
#define OUT 0

int main() {
  int histogram[MAX_WORD_SIZE + 1];
  for (int i = 0; i <= MAX_WORD_SIZE; ++i) {
    histogram[i] = 0;
  }

  int state = OUT;
  int c;
  int word_length = 0;
  while ((c = getchar()) != EOF) {
    if (c == SPACE || c == TAB || c == NEWLINE) {
      if (state == IN) {
        if (word_length <= MAX_WORD_SIZE) {
          ++histogram[word_length];
        }
        word_length = 0;
      }
      state = OUT;
    } else {
      state = IN;
      ++word_length;
    }
  }

  for (int i = 0; i <= MAX_WORD_SIZE; ++i) {
    printf(" %2d | ", i);
    for (int j = 0; j < histogram[i]; ++j) {
      putchar('=');
    }
    putchar(NEWLINE);
  }
}
