#include <stdio.h>

int main()

{
    char *p = "valor1:valor2:valor3";
    char sep = ':';

  while (*p != 0x00)
  {
    if (*p == 0x3a)
    printf("\n");
    else printf("%c", *p);
    p++;
  }

  return 0;
}
