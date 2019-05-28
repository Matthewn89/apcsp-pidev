#include <stdio.h>

int main()
{
  
  int a;
  int* ptrtoa;
  int* ptrtod;
  int* ptrtoe;
 

  float d = 13.2;
  float e = 14.4;
  int b;
  int c;
  int temp;

  ptrtoa = &a;

  a = 5;
  printf("The value of a is %d\n", a);

  *ptrtoa = 6;
  printf("The value of a is %d\n", a);
  
    printf("The value of ptrtoa is %d\n", ptrtoa);
  printf("It stores the value %d\n", *ptrtoa);
  printf("The address of a is %d\n", &a);

  *ptrtod = &d;

  *ptrtod = 13.2;
  printf("The value of d is %d\n", d);

  printf("The value of ptrtod is %d\n", ptrtod);
  printf("It stores the value %d\n", *ptrtod);
  printf("The address of d is %d\n", &d);
  
    *ptrtoe = 14.4;
  printf("The value of e is %d\n", a);

  printf("The value of ptrtoe is %d\n", ptrtoe);
  printf("It stores the value %d\n", *ptrtoe);
  printf("The address of e is %d\n", &e);

  temp = *ptrtod;
  *ptrtod  = *ptrtoe;
  *ptrtoe = temp;

  printf("The value of d is %d and e is %d\n", d, e); 
}
