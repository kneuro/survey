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
      return 0;
    }
  printf("Nice! Now, what is your name?\n");
  printf("\nEnter your name: ");
  char name[100];
  scanf("%s", name);
  printf("\nHello %s! It's nice to meet you!\n", name);
  printf("\nWould you like to write your age and name to a text file?\n");
  int yn;
  printf("\nPress 1 for yes or any other key for no! ");
  scanf("%d",&yn);
  if (yn == 1) {
    FILE *fp;
    fp = fopen("Survey.txt", "w+");
    fprintf(fp, "\nAge: %d", age);
    fprintf(fp, "\nName: %s\n\n", name);
    fclose(fp);
    printf("\nAll done! Check Survey.txt in the current directory!\n\n");
    return 0;
  }
  else {
    printf("\nOkay! Exiting...\n\n");
    return 0;
  }
  return (0);
}
