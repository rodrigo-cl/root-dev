#include <stdio.h>

int main()

{
  const char *p = "\"setor\":\"alimentos\"";
  char forb[] = {0x22, 0x3a};
  
  while (*p != 0x00)
  {
    
    if (*p != forb[0] && *p != forb[1])
    printf("%c", *p);
    if (*p == 0x3a)
    printf("\n");
    p++;
  }

  return 0;
}
