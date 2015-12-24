#include <stdio.h>

int main()
{
  int c,conta=1;

  while ( (c=getchar()) != EOF) {
putchar(c);
if (c=='\n'){
conta++;}
  }
printf("\nConta righe= %d\n",conta);
  return 0;
}