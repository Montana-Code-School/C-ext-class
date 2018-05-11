#include <stdio.h>

int main (){
  int c;

  c = getchar();
  while (c != EOF) {
	  if(c <= 122 && c >= 97) {
		  printf("%c", c-32);
	  } else {
	  	printf("%c", c);
	  }
	  c = getchar();
  }
  return 1;
}
