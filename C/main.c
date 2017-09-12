#include <stdio.h>

int main ()
{
  char name[100];
  int age;

  printf("\nWelcome! How old are?\n\n");
  scanf("%d", &age);
  printf("\nYou are %d! Nice!\n\n", age);

  return (0);
}
