#include <stdio.h>
#include <string.h>

char std_name[15];
/* Should the grades be set as floats, if there would ever be any floating point values then maybe */
float grades[2];
float grade_total = 0; /* The sum of grades. */
float grade_avg;   /* The l ammount of the grades. */
char grade_a;
int i;

char grade_check(float grade) {
    grade_a = 'A';
    if(grade > 90.0) {
        return grade_a;
    } else {
        return 'F';
    }
}

int main() {
    strcpy(std_name, "Jim");                        // Set the kid's name
    printf("Hello %s, welcome to school...\n", std_name); // %s accepts a string into the string interpolation, %d would be for ints

    /* Setup Grades */
    grades[0] = 96.0;
    grades[1] = 73.0;

    /* Calculate grades */
    printf("Calculating grades...\n");
    for(i=0; i<2; i++){
        printf("%f, ", grades[i]);
        grade_total = grade_total + grades[i];
    }
    printf("\nGrade Total: %f\n", grade_total);
    grade_avg = grade_total / 2;
    /* Print Grades */
    printf("Your Average: %f\n", grade_avg);    //Print grade average, note the string interpolation
    printf("Your letter grade: %c\n", grade_check(grade_avg));
    printf("You're awesome, keep up the good work! \n");
    return(0);
}
