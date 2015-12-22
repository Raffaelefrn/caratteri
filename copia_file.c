/* copia_file.c */

/* copia da stdin a stdout, carattere per carattere */

/* $ ./a.out < src.txt > dst.txt
 */

#include <stdio.h>

int main()
{
  int c;

  while ( (c=getchar()) != EOF ) {
    putchar(c);
  }

  return 0;
}
