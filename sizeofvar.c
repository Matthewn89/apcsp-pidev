#include<stdio.h>

int main()
{
  int a = 545;
  char c = 'b';
  float f = 12.345;
  double d = 123.456;
  unsigned int i = 7;
  signed int k = 8;
  // print value and size of an int variable
  printf("int a value: %d and size: %d bytes\n", a, sizeof(a));
  printf("char c: %c and size: %c bytes\n", c, sizeof(c));
  printf("float f: %f and size: %f bytes\n", f, sizeof(f));
  printf("double d: %f and size: %f bytes\n", d, sizeof(d));
  printf("unsigned int i value: %d and size: %d bytes\n", i, sizeof(i));
  printf("signed int k value: %d and size: %d bytes\n", k, sizeof(k));
}
