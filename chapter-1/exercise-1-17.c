#include <stdio.h>

#define THRESHOLD 80

int read_line(char line[], int limit);

int main() {
  char line[THRESHOLD + 1];

  int length;
  while ((length = read_line(line, THRESHOLD + 1)) > 0) {
    if (length == (THRESHOLD + 1) && line[length - 1] != '\n') {
      printf("%s", line);
      int c;
      while ((c = getchar()) != EOF && c != '\n') {
        putchar(c);
      }
      if (c == '\n') {
        putchar('\n');
      }
    }
  }
}

int read_line(char line[], int limit) {
  int i;
  int c;
  for (i = 0; i < limit && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}
