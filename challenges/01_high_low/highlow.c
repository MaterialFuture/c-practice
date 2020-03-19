/******************************************************************/
/* Title: Higher and Lower game in C                              */
/* Desc:  Similar to cointoss but guessing a number is higher or  */
/******************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int user_input;

const int rand_num(int min_num, int max_num) {       /* A function that simply creates a random number */
  srand(time(NULL));                                 /* A trick that generates it based on the computers time in seconds iirc */
  int result = 0;                                    /* init */
  result = (rand() % (min_num - max_num) + min_num); /* Yet anther tick to get the value you want */
  return result;                                     /* return value desired */
}

int main() {
  printf("Let's Play Higher Or Lower\n");        /* Print the name of the game */
  printf("The Number is 1-10\n");                /* Give user some info */
  const int r = rand_num(0,10);                  /* Random Num */
  /* For Hard mode move the above into the loop to have it change each time lol */

  while(1){                                      /* Initiate Game */
   printf("Type Number: ");                      /* Prompt user */
   scanf("%d", &user_input);                     /* Trim off that last bit */
   printf("Your Guess:\t%d\n", user_input);      /* Prints your guess */

   /* Not sure how to sanitize input of user here */

   if (user_input == 0){
     printf("No zeros or letters pls...");
   } else if (user_input < r) {                         /* If Guess is lower */
     printf("Higher\n");                         /* Print to guess a hgiher */
   } else if (user_input > r) {
     printf("Lower\n");
   } else {
     printf("You Won!\n");                       /* If matches */
     printf("CPU:\t\t%d\n", r);                  /* What the CPU Guesses */
     break;                                      /* If you beat the CPU then exit the game */
   }
   printf("Restarting...\n");               /* Print something to let the user know that the game (loop) is restarting */
  }
  return 0;
}
