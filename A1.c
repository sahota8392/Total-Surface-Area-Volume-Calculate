#include <stdio.h>  // header for standard C library

/**
* Ask the user to input a number between 2 and 10 & continue asking until valid input within range is provided.
* Returns speherical segments total surface area & volume from given radius and heights.

source 1: Module 2 - Variables & Data Types, Input & Output in C
source 2: Module 2 - Conditionals, Loops and Variable Scope
source 3: W3Schools - https://www.w3schools.com/c/c_user_input.php (store & print user input)
*/

int main() 
{
  int n;  //user input to be within range of min(2) and max(10)
  int min = 2;
  int max = 10 ;

  do {    //loop starts asking input & breaks if input within range of 2-10 only
    if (n < min || n > max) {
      printf("How many spherical segments you want to evaluate [2-10]? \n");
      scanf("%d", &n);
    } 
  } while ( n < min || n > max);
  printf("Valid number:  %d \n", n);
}
