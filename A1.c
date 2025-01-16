#include <stdio.h>    //header for standard C library
#include <stdbool.h>  //boolean
#include <math.h>     //to calculate math formulas
#define PI 3.14159265359  //macro to replace 'PI' with value

/**
* Ask the user to input a number between 2 and 10 & continue asking until valid input within range is provided.
* Returns speherical segments total surface area & volume from given radius and heights.

source 1: Module 2 - Variables & Data Types, Input & Output in C
source 2: Module 2 - Conditionals, Loops and Variable Scope
source 3: W3Schools - https://www.w3schools.com/c/c_user_input.php (store & print user input)
source 4: W3Schools - https://www.w3schools.com/c/c_booleans.php (booleans)
source 5: W3Schools - https://www.w3schools.com/c/c_functions_parameters.php (function parameters)
*/

int n;  //user input for spherical segments to evaluate
float r;  //radius
float ha; //top height
float hb; //bottom height


float a(float r, float ha) {    //a = sqrt[r^2 - ha^2]
  float rh = (r * r) - (ha * ha);
  float a = sqrt(rh);
  return a;
}


float b(float r, float hb) {    //b = sqrt[r^2 - hb^2]
  float bh = (r * r) - (hb * hb);
  float b = sqrt(bh);
  return b;
}


float height(float ha, float hb){   //h = ha - hb
  float h = ha-hb;
  return h;
}

float volume(float a, float b, float h){
  float a_squared = a * a;
  float b_squared = b * b;
  float volume = (1.0/6.0) * PI * h * ((3 * a_squared) + (3 * b_squared) + h);
  return volume;
}


float lateral_area(float r, float h){ //2*PI*R*h calls upon height() function
  float lateral = 2 * PI * r * h;
  return lateral;
}


float bottom_area(float b){ //PI * b^2
  float bottom = PI * (b * b);
  return bottom;
}


float top_area(float a){ //PI * a^2
  float top = PI * (a * a);
  return top;
}

float total_surface(float lateral, float bottom, float top){
  float total_surface = lateral + bottom + top;
  return total_surface;
}


int validate_real_pos(float r, float ha, float hb) //validate data inputs (r,ha,hb) are real positives
{
  if (r < 0 || ha < 0 || hb <0){
    printf("Invalid input, all 3 parameters must be real positive only! \n");
    return false; //invalid
  } 
  return true;  //valid
}


int validate_height(float ha, float hb) //validate ha ≥ hb
{
  if (ha <= hb){
    printf("Invalid Input, ha=%.2f, hb=%.2f. ha must be greater than or equal to hb \n", ha, hb);
    return false; //invalid
  }
  return true;  //valid
}


int validate_radius(float r, float ha, float hb) //validate R is greater than ha & hb
{
  if (r < ha){
    printf("Invalid Input, R=%.2f ha=%.2f. R must be greater than or equal to ha \n", r, ha);
    return false;
  } else if (r < hb){
    printf("Invalid Input, R=%.2f hb=%.2f. R must be greater than or equal to hb \n", r, hb);
    return false;
  } else {
    return true;
  }
}


int data() //get data for radius and heights
{
  //loops until r, ha, hb is obtained for each number of 'n' segments
  for(int i=1; i<=n;){
    printf("What is the radius of the sphere (R)? \n");
    scanf("%f", &r);
    printf("What is the height of the top area of the spherical segment (ha)? \n");
    scanf("%f", &ha);
    printf("What is the height of the bottom area of the spherical segment (hb)? \n");
    scanf("%f", &hb);

    printf("Entered data: R=%.2f, ha=%.2f, hb=%.2f \n", r, ha, hb);
    if (validate_real_pos(r, ha, hb) && (validate_height(ha, hb)) && validate_radius(r, ha, hb)){
      float area = total_surface(lateral_area(r,height(ha,hb)), (bottom_area(b(r, hb))), top_area(a(r,ha)));
      float vol = volume(a(r, ha), b(r, hb), height(ha,hb));
      printf("Total Surface Area =%.2f  Volume=%.2f \n", area, vol);
      i++;  //valid then increment
    }
  }
}


int main() //prompt user to input valid number (n) between [2,10]
{
  int min = 2;
  int max = 10 ;

  do {    //loops until valid "n" input is given within [2,10]
    if (n < min || n > max) {
      printf("How many spherical segments you want to evaluate [2-10]? \n");
      scanf("%d", &n);
    } 
  } while ( n < min || n > max);
  printf("Valid number:  %d \n", n);

  data(); //call data function to get r, ha, hb
}
