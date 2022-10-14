#include <stdio.h>
#include <stdlib.h>

int main()
{
  int q,w,e;

  printf("Enter two integers \n");
  scanf("%d %d", &q, &w);

  printf("Before Swapping\nFirst integer = %d\nSecond integer = %d\n", q, w);

  e = q;
  q = w;
  w = e;

  printf("After Swapping\nFirst integer = %d\nSecond integer = %d\n", q, w);

  return 0;
}
