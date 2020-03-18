#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char user_input[10];

const int rand_num(int min_num, int max_num) {       /* A function that simply creates a random number */
  srand(time(NULL));                                 /* A trick that generates it based on the computers time in seconds iirc */
  int result = 0;                                    /* init */
  result = (rand() % (min_num - max_num) + min_num); /* Yet anther tick to get the value you want */
  return result;                                     /* return value desired */
}

char coin_arr[2][2] = {
  "h", "t"
};

int main() {
  printf("Heads or Tails\n");
  printf("h or t? ");
  fgets(user_input, sizeof(user_input), stdin);
  user_input[strlen(user_input)-1] = '\0';
  printf("Your Guess:\t%c\n", user_input[0]);

  const int r = rand_num(0,1);
  printf("CPU:\t\t%c\n", coin_arr[r][1]);

  return 0;
}
