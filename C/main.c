#include <stdio.h>

int main ()
{
  char name[100];
  int age;
  printf("\nWelcome to Survey! What is your age?\n\n");
  scanf("%d", &age);
  printf("\nYou are %d years old!\n\n", age);
  return (0);
}
