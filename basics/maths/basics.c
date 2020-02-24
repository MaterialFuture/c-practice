#include <stdio.h>
#include <string.h>

char std_name[15];
int test_grade_1;
int test_grade_2;
int grade_totals; /* The total ammount of the grades. */

int main() {
    strcpy(std_name, "Jim");
    printf("Hello %s, welcome to school...\n", std_name);
    test_grade_1 = 96;
    test_grade_2 = 74;
    printf("Calculating grades...\n");
    grade_totals = test_grade_1 + test_grade_2;        //Calculate grades
    printf("Your Average: %d\n", grade_totals / 2);  //Print grade amounts, note the string interpolation
    return(0);
}
