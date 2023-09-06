#include <stdio.h>

int main() {
  float lower = -160.0 / 9.0;
  float upper = 1340.0 / 9.0;
  float step = 100.0 / 9.0;

  printf("celsius fahr\n");
  float celsius = -17.78;
  while (celsius <= upper) {
    float fahr = 9.0 / 5.0 * celsius + 32.0;
    printf("%7.2f %4.0f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
