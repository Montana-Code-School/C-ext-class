#include <stdio.h>
#include <stdlib.h>

int main () 
{
  int guess = 100;
  char ready;
  char direction;
  char affirm = 'n';

  printf("Think of a number between 1 and 100\n\n");
  printf("Do you think of a number? y for yes, n for no: ");
  scanf("%c", &ready);
  if(ready  == 'y') {
    printf("Is your number %d?", guess);
    scanf("%c", &affirm);
    while(affirm != 'y') {
      printf("Cool is it greater (type g) or less than (type l) %d?", guess);
      scanf("%c", &direction);
      if(direction == 'l') {
       guess--;
      }
    }
  } else {
    printf("Well...  think of one and get back to me.");
  }
  getchar();
  return 0;
}
