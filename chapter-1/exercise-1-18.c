#include <stdio.h>

#define MAXLINE 1000
#define SPACE ' '
#define TAB '\t'
#define NEWLINE '\n'

int read_line(char line[], int limit);
int trailing(char line[], int length);

int main() {
  char line[MAXLINE];
  int length;
  while ((length = read_line(line, MAXLINE)) > 0) {
    int count = trailing(line, length);
    if (count < length) {
      line[count] = '\0';
      printf("%s\n", line);
    }
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

int trailing(char line[], int length) {
  int count = 0;
  for (int i = length - 1; i >= 0 && (line[i] == SPACE || line[i] == NEWLINE);
       --i) {
    ++count;
  }
  return count;
}
