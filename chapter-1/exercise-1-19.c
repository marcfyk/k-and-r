#include <stdio.h>

#define MAXLINE 1000
#define NEWLINE '\n'

int read_line(char line[], int limit);
void reverse(char line[], int length);

int main() {
  char line[MAXLINE];
  int length;
  while ((length = read_line(line, MAXLINE)) > 0) {
    reverse(line, length);
    printf("%s", line);
  }
}

int read_line(char line[], int limit) {
  int i;
  int c;
  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != NEWLINE; ++i) {
    line[i] = c;
  }
  if (c == NEWLINE) {
    line[i] = NEWLINE;
    ++i;
  }
  line[i] = '\0';
  return i;
}

void reverse(char line[], int length) {
  for (int i = 0; i < ((length - 1) / 2); ++i) {
    char tmp = line[i];
    line[i] = line[length - 1 - i];
    line[length - 1 - i] = tmp;
  }
}
