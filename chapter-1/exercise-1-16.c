#include <stdio.h>

#define MAX_LENGTH 1000

int read_line(char line[], int limit);
void copy(char dest[], char src[]);

int main() {

  char line[MAX_LENGTH];
  char longest[MAX_LENGTH];

  int max = 0;
  int length;
  while ((length = read_line(line, MAX_LENGTH)) > 0) {
    if (length > max) {
      max = length;
      copy(longest, line);
    }
  }
  if (max > 0) {
    printf("longest line length: %d\n%s", max, longest);
    if (max > MAX_LENGTH) {
      printf("...\n");
    }
  }
}

int read_line(char line[], int limit) {
  int c = getchar();
  int i = 0;
  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    line[i] = c;
  }
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  while (c != EOF && c != '\n') {
    ++i;
    c = getchar();
  }
  return i;
}

void copy(char dest[], char src[]) {
  for (int i = 0; src[i] != '\0'; ++i) {
    dest[i] = src[i];
  }
}
