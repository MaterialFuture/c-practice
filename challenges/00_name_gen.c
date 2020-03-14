/**************************************************/
/* Title: Name Generator                          */
/* Desc: Creating Fake Names for use in a program */
/**************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_NUM 20    /* Change this to be user input */

char name[MAX_NUM];   /* Generated name, mostly to set the pointer */
char f_name[MAX_NUM]; /* First name to print */

int rand_num(int min_num, int max_num) { /* A function that simply creates a random number */
  srand(time(NULL));
  int result = 0;
  result = (rand() % (min_num - max_num) + min_num);
  return result;
}

int main(void) {
  int r = rand_num(0,21); /* Random number from 0...20 */
  printf("%d\n", r);
  return 0;
}
