#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
  printf("\nWelcome to Survey! What is your age?\n\n");
    char n[100];
    int age=0, string=1;
    printf("Enter your age: ");
    scanf("%s", n);
    while(n[age] != '\0')
    {
      string =isdigit(age[n]);
      if (!string) break;
      age++;
    }
    if(string)
    {
      age=atoi(n);
      printf("\nYou are %d years old!\n\n", age);
    }
    else
    {
      printf("\nThat's not an age! Try again...\n\n");
    }
  return (0);
}
