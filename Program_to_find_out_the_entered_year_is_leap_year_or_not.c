#include <stdio.h>
int main()
{
  int year;
 
  scanf("%d", &year);
  if (year % 4 == 0)
  {
    //Nested if else
    if (year % 100 == 0)
    {
      if (year % 400 == 0)
        printf("True", year);
      else
        printf("False", year);
    }
    else
      printf("True", year);
  }
  else
    printf("False", year);
  return 0;
}