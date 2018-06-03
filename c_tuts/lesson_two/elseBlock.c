#include <stdio.h>

int main()
{
  int age;
  printf("Please enter your age: ");
  scanf("%d", &age);
  if (age < 100) {
     printf("you are pretty young");
  } else if (age == 100) {
     printf("you are old");
  } else {
     printf("you are really old");
  }
  
  return 0;
}
