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

const int rand_num(int min_num, int max_num) {       /* A function that simply creates a random number */
  srand(time(NULL));                                 /* A trick that generates it based on the computers time in seconds iirc */
  int result = 0;                                    /* init */
  result = (rand() % (min_num - max_num) + min_num); /* Yet anther tick to get the value you want */
  return result;                                     /* return value desired */
}

#define MAX_NUM 5   /* Change this to be user input */
const char first_name_arr[MAX_NUM][10] = {
  "Jim", "Bill", "John", "Joe", "Richard",
}; /* First name to print */
const char last_name_arr[MAX_NUM][10] = {
  "Shoemaker", "Smith", "Richards", "Black"
}; /* Generated name, mostly to set the pointer */

/* Setup pointers */
/* const char *f_name_arr_ptr = &first_name_arr; */

char create_random_user(void) {    /* Setup data to create new random user data */
  const int r = rand_num(0,5);     /* Random number from 0...20 */
  struct user_data {
    char first_name[MAX_NUM][10];
    char last_name[MAX_NUM][10];
  };
  struct user_data random_user = { /* Create structure of user_data for random_data */
    first_name_arr[r][10],         /* Ger random object in array */
    last_name_arr[r][10],
  };

  return random_user;              /* Return the whole struct, doesn't work currently */
}
/* Extras: Other forms of Credentials such as ;@name, Phone, Address */
int main(void) {

  #define usr random_user
  printf("First Name:\t%s\nLast Name:\t%s\n", /* Layour in tabular fashion */
         usr.first_name[0],                           /* Random First Name */
         usr.last_name[0]                            /* Random Last Name */
  );
  return 0;
}

/* NOTE: Working on making this more robust, utilizing structs and pointers to make it works more like a real world applications  */

/* NOTE: Currently doesn't compile, still working on setting up pointers */
