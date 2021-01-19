#include <stdio.h>

int main(void) {
  int h;
  scanf ("%d",&h);
  switch (h){
    case 1:
      printf ("*");
      break;
    case 2:
      printf ("\t*\n");
      printf ("*\t*\t*\t");
      break;
    case 3:
      printf ("\t\t*\n");
      printf ("\t*\t*\t*\t\n");
      printf ("*\t*\t*\t*\t*\t");
      break;
    case 4:
      printf ("\t\t\t*\n");
      printf ("\t\t*\t*\t*\t\n");
      printf ("\t*\t*\t*\t*\t*\t\n");
      printf ("*\t*\t*\t*\t*\t*\t*");
      break;
    }
  return 0;
}

--------------------------------------

