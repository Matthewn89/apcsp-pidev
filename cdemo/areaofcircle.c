#include <stdio.h>

float areaofCircle(float r) {
    float a;
    a = 3.14 * r * r;
    printf("%f\n", a);
  }
int main() {
  for (float i = 3.5; i<= 12.5; i++) {
    areaofCircle(i);
  }
}
