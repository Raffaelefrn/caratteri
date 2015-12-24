#include <stdio.h>

int main()
{
  int c,conta=0;

  while ( (c=getchar()) != EOF) {
if (c==' '){conta++;}
if (conta==2){
c=0;
conta=1;}
if ((c!=' ')&&(c!=0)){conta=0;}
putchar(c);
}

return 0;
}