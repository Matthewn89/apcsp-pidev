#include <stdio.h>

int arrayAdd(int *arr, int s, int n) {
  for (int c; c <= s; c++) {
    *arr = arr[c] + n;
    return *arr;
  }
}

int main() {
  int arr[100];
  for (int i = 0; i <= 100; i++) {
    arr[i] = i * i;
    int a = 100;
    int b = 1;
    arrayAdd(&arr[i], a, b);
    printf("%d\n", arr[i]); 
  }
}
