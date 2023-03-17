/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1, sub2;
  float ave;
  printf("Enter the marks of subject 1: ");
  scanf("%d", &sub1);
  printf("Enter the marks of subject 2: ");
  scanf("%d", &sub2);

  ave = (sub1 + sub2) / 2.0;
  printf("The average of the two marks is %.2f", ave);
  
  return 0;
}


