/**************************************************************************/
/* Title:                                                                 */
/* Description: Get the area and volumes of shapes 2d and 3d respectively */
/**************************************************************************/
#include <stdio.h>

const float PI = 3.1415927; /* Next step, create a class or script that calculates PI, then reference that here */
float x = 12.5;
float y = 15.3342;

double square_calc(float h, float w) { /* calculate quadrilaterals like squares and rectangles. */
    return (h * w);
}

double triangle_calc(float h, float w) {
    return ((w * h) / 2);
}


double sphere_calc(float r) {
    return (((4/3)* PI) * (r * r * r));
}

double square_per(float h, float w) { /* Calculates perimeter */
    return (2 * (h + w));
}

int main(){
    printf("Prints values based on \nX: %f\nY: %f\n\n", x, y);

    printf("Calulate the perimeter of a squares and such...\n");
    printf("Answer: %f \n", square_per(x, y));

    printf("Calulate the area of a squares and such...\n");
    printf("Answer: %f \n", square_calc(x, y));

    printf("Calulate the area of a triangle...\n");
    printf("Answer: %f \n", triangle_calc(x, y));

    printf("Calulate the volume of a sphere, the radius being %f...\n", x);
    printf("Answer: %f \n", sphere_calc(x));

    return(0);
}
