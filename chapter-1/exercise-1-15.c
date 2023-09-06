#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

float fahr_to_celsius(float fahr);

int main() {
  printf("fahr celsius\n");
  float fahr = LOWER;
  while (fahr <= UPPER) {
    printf("%4.0f %7.2f\n", fahr, fahr_to_celsius(fahr));
    fahr = fahr + STEP;
  }
}

float fahr_to_celsius(float fahr) { return 5.0 / 9.0 * (fahr - 32.0); }
