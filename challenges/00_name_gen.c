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

int rand_num(unsigned int min_num, unsigned int max_num) { /* A function that simply creates a random number */
  srand(time(NULL));                                       /* A trick that generates it based on the computers time in seconds iirc */
  int result = 0;                                          /* init */
  result = (rand() % (min_num - max_num) + min_num);       /* Yet anther tick to get the value you want */
  return result;                                           /* return value desired */
}

int main(void) {
  unsigned int r = rand_num(0,21); /* Random number from 0...20 */
  printf("%d\n", r);               /* Print random number */
  return 0;
}
