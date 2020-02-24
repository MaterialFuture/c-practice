#include <stdio.h>
#include <string.h>

char std_name[15];
/* Should the grades be set as floats, if there would ever be any floating point values then maybe */
float test_grade_1;
float test_grade_2;
float grade_avg; /* The total ammount of the grades. */
char grade_a;

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
    test_grade_1 = 96;
    test_grade_2 = 73;
    printf("Calculating grades...\n");
    grade_avg = test_grade_1 + test_grade_2;     //Calculate grades
    printf("Your Average: %f\n", grade_avg / 2);    //Print grade average, note the string interpolation
    printf("Your letter grade: %c\n", grade_check(grade_avg));
    printf("You're awesome, keep up the good work! \n");
    return(0);
}
