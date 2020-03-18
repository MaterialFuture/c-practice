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

/* Change this to be user input */
#define MAX_OBJ 5 /* Max Number of objects to be stored in array, not really important currently */
#define MAX_NUM 10 /* Max Number of characters to be in said object */
const char first_name_arr[MAX_OBJ][MAX_NUM] = {
  "Jim", "Bill", "John", "Justin", "Richard",
}; /* First name to print */
const char last_name_arr[MAX_OBJ][MAX_NUM] = {
  "Shoemaker", "Smith", "Richards", "Black", "Wizard"
}; /* Generated name, mostly to set the pointer */

struct phone_number { /* Each code for a phone number */
  int cc, x, y, z;
} user_number;

struct user_data {
  char first_name[MAX_NUM];
  char last_name[MAX_NUM];
  int phone[4];

} random_user;


/* Extras: Other forms of Credentials such as ;@name, Phone */
int main(void) {
  user_number.cc = rand_num(0,26);
  user_number.x = rand_num(123,998);
  user_number.y = rand_num(111,999);
  user_number.z = rand_num(1111,9999);

  const int r = rand_num(0,5);                       /* Random number from 0...20 */
  strcpy(random_user.first_name, first_name_arr[r]); /* Assign random first name */
  strcpy(random_user.last_name, last_name_arr[r]);   /* Asign Random last name */
  random_user.phone[0] = user_number.cc;             /* assignment of phone country code */
  random_user.phone[1] = user_number.x;              /* assignment of phone codes */
  random_user.phone[2] = user_number.y;              /* same */
  random_user.phone[3] = user_number.z;              /* same */

  printf("First Name:\t%s\nLast Name:\t%s\n",        /* Layour in tabular fashion */
         random_user.first_name,                     /* Random First Name */
         random_user.last_name                       /* Random Last Name */
         );
  printf("Phone:\t\t+%d %d-%d-%d\n",                   /* Printing the random user's name */
         random_user.phone[0],
         random_user.phone[1],
         random_user.phone[2],
         random_user.phone[3]
         );
  printf("Username\t@%c%s\n",
         random_user.first_name[0],
         random_user.last_name
         );

  return 0;
}

/* NOTE: Working on making this more robust, utilizing structs and pointers to make it works more like a real world applications  */
/* NOTE: Currently doesn't compile, still working on setting up pointers */
