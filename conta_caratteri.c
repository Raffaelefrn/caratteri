#include <stdio.h>

int main()
{
  int c,conta=0;

  while ( (c=getchar()) != EOF) {
putchar(c);

conta++;}  
printf("\nConta caratteri= %d\n",conta);
  return 0;
}
