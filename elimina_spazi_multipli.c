#include <stdio.h>

int main()
{
  int c,conta=0;

  while ( (c=getchar()) != EOF) {
if (((c==' ')||(c!=' '))&&(conta<2)){

if (c!=' '){putchar(c);}
else {conta++;}
if((c==' ')&&(conta==1)){putchar(c);}


}
if (conta==2){conta=1;}
if ((c!=' ')&&(c!=0)){conta=0;}
}

return 0;
}