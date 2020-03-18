/***********************************************************/
/* Title: Heads or Tails                                   */
/* Desc:  A simple implementation of heads or tails        */
/* Bonus: Work on higher or lower implementation, creating */
/***********************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char user_input[10];
char cpu_coin; /* Storing the coin value as a single Char */

const int rand_num(int min_num, int max_num) {       /* A function that simply creates a random number */
  srand(time(NULL));                                 /* A trick that generates it based on the computers time in seconds iirc */
  int result = 0;                                    /* init */
  result = (rand() % (min_num - max_num) + min_num); /* Yet anther tick to get the value you want */
  return result;                                     /* return value desired */
}

char coin_arr[2][2] = { /* An array of 2 objects with length of 2 */
  "h", "t"              /* Heads and Tails */
};

int main() {
  printf("Let's Play Heads or Tails\n");         /* Print the name of the game */
  while(1){                                      /* Initiate Game */
   printf("h or t? ");                           /* Prompt user */
   fgets(user_input, sizeof(user_input), stdin); /* Get User Input */
   user_input[strlen(user_input)-1] = '\0';      /* Trim off that last bit */

   const int r = rand_num(0,2);                  /* Random Num to get h or t */
   cpu_coin = coin_arr[r][0];                    /* Get random object in array,  */
   printf("CPU:\t\t%c\n", cpu_coin);             /* Print what the "CPU" has got on their coin */

   if (user_input[0] != cpu_coin) {              /* If user input matches or doesn't the SPUs then print something */
     printf("No Match\n");
   } else {
     printf("You Won!\n");
     break;                                      /* If you beat the CPU then exit the game */
   }
   printf("Let's Try Again...\n");               /* Print something to let the user know that the game (loop) is restarting */
  }
  return 0;
}
