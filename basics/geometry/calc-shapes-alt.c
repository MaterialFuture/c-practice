/******************************************************************************************/
/* Title:                                                                                 */
/* Description: Get the area and volumes of shapes 2d and 3d respectively, Second Attempt */
/******************************************************************************************/
#include <stdio.h>

#define SQR_PER(x, y) (2 * (x + y))            /* Perimeter of a Square */
#define SQR_ARE(x, y) (x * y)                  /* Area of Area */
#define SPH_VOL(x) (((4/3)* PI) * (x * x * x)) /* Volume of Sphere */
#define TRI_ARE(x, y) ((x * y) / 2)            /* Area of Triangle */

const float PI = 3.1415927; /* Next step, create a class or script that calculates PI, then reference that here */
float x = 12.5;
float y = 15.3342;

int main(){
  printf("Prints values based on \nX: %f\nY: %f\n\n", x, y);

  printf("Calulate the perimeter of a squares and such...\n");
  printf("Answer: %f \n", SQR_PER(x, y));

  printf("Calulate the area of a squares and such...\n");
  printf("Answer: %f \n", SQR_ARE(x, y));

  printf("Calulate the area of a triangle...\n");
  printf("Answer: %f \n", TRI_ARE(x, y));

  printf("Calulate the volume of a sphere, the radius being %f...\n", x);
  printf("Answer: %f \n", SPH_VOL(x));

  return(0);
}
