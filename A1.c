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
  int r;  //user inputs radius
  int ha; //user inputs top height
  int hb; //user inputs bottom height

  int min = 2;
  int max = 10 ;

  do {    //loop starts asking input & breaks if input within range of 2-10 only
    if (n < min || n > max) {
      printf("How many spherical segments you want to evaluate [2-10]? \n");
      scanf("%d", &n);
    } 
  } while ( n < min || n > max);
  printf("Valid number:  %d \n", n);

  //loop until "n" number of spherical segment parameters are obtained
  for(int i=1; i<=n; i++){
    printf("What is the radius of the sphere (R)? \n");
    scanf("%d", &r);
    printf("What is the height of the top area of the spherical segment (ha)? \n");
    scanf("%d", &ha);
    printf("What is the height of the bottom area of the spherical segment (hb)? \n");
    scanf("%d", &hb);

    printf("Entered data: R=%d, ha=%d, hb=%d \n", r, ha, hb);
  }
}
