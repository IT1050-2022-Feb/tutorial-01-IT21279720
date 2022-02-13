/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2, tot, avg;

  printf("Enter subject 1 mark:");
  scanf("%d",&mark1);
  printf("Enter subject 2 mark:");
  scanf("%d",&mark2);

  tot=mark1+mark2;
  avg=tot/2;
  printf("Average mark is %d.",avg);
  
  return 0;
}

