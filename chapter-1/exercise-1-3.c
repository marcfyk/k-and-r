#include <stdio.h>

int main() {
  float lower = 0;
  float upper = 300;
  float step = 20;

  printf("fahr celsius\n");
  float fahr = lower;
  while (fahr <= upper) {
    float celsius = 5.0 / 9.0 * (fahr - 32.0);
    printf("%4.0f %7.2f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
