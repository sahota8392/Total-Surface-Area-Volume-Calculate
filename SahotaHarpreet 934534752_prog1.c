#include <studio.h>  // header for standard C library

/**
* Ask the user to input a number between 2 and 10.
* The program continues asking until a value within that required range is provided.

*source1: Module 2 - Variables & Data Types, Input & Output in C
*source2: Module 2 - Conditionals, Loops and Variable Scope
*/

int main() 
{
  int n;  //user input to be within range of min(2) and max(10)
  int min = 2;
  int max = 10 ;

  do {
    printf("How many spherical segments you want to evaluate [2-10]?");
    scanf("%d", &n);
    
    if (n < min || n > max) {
      printf("How many spherical segments you want to evaluate [2-10]?");
    } 
  } while ( n < min || n > max);
  print("VALID:", "%d")
}
