#include <stdio.h>
#include <string.h>

int main(void) {
  char string1[26];
  for (int A = 0; A < 26; A++){
    string1[A] = 97 + A;
  }
  char string2 [] = "abcdefghijklmnopqrstuvwxyz";
  if (strcmp(string1, string2) == 0)
     printf("Lowercase strings are the same\n");
  else
     printf("Lowercase strings are not the same\n");
  for (int A = 0; A < 26; A++){
    string2[A] = string2[A] - 32;
  }
  if (strcmp(string1, string2) == 0)
     printf("Did not work\n");
  else
     printf("Worked\n");
  
  char string3[52];
  strcpy(string3, string1);
  strcat(string3, string2);
  printf("Lowercase: %s\n", string1);
  printf("Uppercase: %s\n", string2);
  printf("Both: %s\n", string3);
}
