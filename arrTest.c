#include<stdio.h>
int main() {
  int a[10];
  int i;
  for(i = 0; i < sizeof(a)/sizeof(int); ++i) {
      a[i] = i * 2;
  }
  printf("end of array num is %d\n",*(a + sizeof(a)/sizeof(int) - 1));
  return 0;
}
