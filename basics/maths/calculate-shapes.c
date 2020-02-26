/**************************************************************************/
/* Title:                                                                 */
/* Description: Get the area and volumes of shapes 2d and 3d respectively */
/**************************************************************************/
#include <stdio.h>

const float PI = 3.1415927; /* Next step, create a class or script that calculates PI, then reference that here */

double square_calc(float h, float w) { /* calculate quadrilaterals like squares and rectangles. */
    return (h * w);
}

double triangle_calc(float h, float w) {
    return ((w * h) / 2);
}


double sphere_calc(float r) {
    return (((4/3)* PI) * (r * r * r));
}

int main(){
    printf("Calulate the area of a squares and such...\n");
    printf("Answer: %f \n", square_calc(12.5, 15.3443));

    printf("Calulate the area of a triangle...\n");
    printf("Answer: %f \n", triangle_calc(12.5, 15.3443));

    printf("Calulate the volume of a sphere...\n");
    printf("Answer: %f \n", sphere_calc(12));

    /* return(0); */
}
