/************************************************************************************/
/* Title: Grades                                                                    */
/* Description: Getting grades of students and print the information to the console */
/************************************************************************************/
#include <stdio.h>
#include <string.h>

char  std_name[20];        /* Student Name */
int   grades[] = {96, 73}; /* Add grades here */
int   grade_amount;        /* Ammount of items in array */
int   grade_total = 0;     /* The sum of grades. */
float grade_avg;           /* The l ammount of the grades. */
int   i;                   /* The counter for the loop */
char  ltr_grade[] = {      /* Letter Grades stored as an array */
 'A', 'B', 'C', 'D', 'F'
};


char grade_check(float grade) { /* A function to convert grade to letter grade */
  if(grade > 90.0) {
    return ltr_grade[0];    /* Letter Grades accessed via the array */
  } else if(grade > 80.00) {
    return ltr_grade[1];
  } else if(grade > 70.00) {
    return ltr_grade[2];
  } else if(grade > 60.00) {
    return ltr_grade[3];
  } else {
    return ltr_grade[4];    /* Falback is an 'F' */
  }
}

int main() {
  printf("Enter Name: ");
  fgets(std_name, sizeof(std_name), stdin);
  std_name[strlen(std_name)-1] = '\0'; /* Removes newline at the end of string/char array */

  /* strcpy(std_name, "Jim");                        // Set the kid's name */
  printf("Pulling information for student, %s...\n", std_name); // %s accepts a string into the string interpolation, %d would be for ints

  /* Calculate grades */
  printf("Calculating grades...\n");
  grade_amount = sizeof(grades) / sizeof(int); //Get how many are in array by getting byte value array and dividing by size of int

  for(i=0; i<grade_amount; i++){
    printf("%d ", grades[i]);
    grade_total = grade_total + grades[i];
  }
  printf("\nGrade Total: %d\n", grade_total);
  printf("Number Of Grades: %d\n", grade_amount);
  grade_avg = grade_total / grade_amount;
  /* Print Grades */
  printf("Your Average: %f\n", grade_avg);    //Print grade average, note the string interpolation
  printf("Your letter grade: %c\n", grade_check(grade_avg));
  printf("Keep up the good work %s\n", std_name);
  return(0);
}
