/**************************************************/
/* Title: Name Generator                          */
/* Desc: Creating Fake Names for use in a program */
/* Base Reqs: Do First Name Last Name             */
/* Extras: Do other forms of credentials          */
/**************************************************/
#include <stdio.h>  /* For everything else */
#include <string.h> /* Storing of strings, it's easier this way */
#include <stdlib.h> /* For random number gen */
#include <time.h>   /* For random number gen */
#define MAX_NUM 5   /* Change this to be user input */

char f_name[MAX_NUM][10] = {"Jim", "Bill", "John", "Joe", "Richard", }; /* First name to print */
char l_name[MAX_NUM][10] = {"Shoemaker", "Smith", "Richards", "Black"}; /* Generated name, mostly to set the pointer */

int rand_num(int min_num, int max_num) {             /* A function that simply creates a random number */
  srand(time(NULL));                                 /* A trick that generates it based on the computers time in seconds iirc */
  int result = 0;                                    /* init */
  result = (rand() % (min_num - max_num) + min_num); /* Yet anther tick to get the value you want */
  return result;                                     /* return value desired */
}

/* Extras: Other forms of Credentials such as ;@name, Phone, Address */

int main(void) {
  int r = rand_num(0,5);                      /* Random number from 0...20 */
  printf("First Name:\t%s\nLast Name:\t%s\n", /* Layour in tabular fashion */
         f_name[r],                           /* Random First Name */
         l_name[r]                            /* Random Last Name */
  );
  return 0;
}
