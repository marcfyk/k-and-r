#include <stdio.h>

#define ASCII_MAX 255

int main() {
  int histogram[ASCII_MAX + 1];
  for (int i = 0; i <= ASCII_MAX; ++i) {
    histogram[i] = 0;
  }

  int c;
  while ((c = getchar()) != EOF) {
    if (0 <= c && c <= ASCII_MAX) {
      ++histogram[c];
    }
  }

  for (int i = 0; i <= ASCII_MAX; ++i) {
    printf(" %3d | ", i);
    for (int j = 0; j < histogram[i]; ++j) {
      putchar('=');
    }
    putchar('\n');
  }
}
