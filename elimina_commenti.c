#include <stdio.h>

int main()
{
  enum stato {testo,slash,asterisco} ;
  int c,stato=testo;

  while ( (c=getchar()) != EOF) {
    if (c!='*' && stato==slash) {
      printf("/");
      stato=testo;
    } else if (c=='/' && stato==testo) {
      stato=slash;
    } else if (c=='*' && stato==slash) {
      stato=asterisco;
    }
    if(stato==testo){
      putchar(c);
    }
    if(c=='/' && stato==asterisco){
     stato=testo;
    }
}
return 0;
}
