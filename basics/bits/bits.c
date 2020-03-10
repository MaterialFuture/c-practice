#include <stdio.h>

/* Setup bits for all flags */
const int ERROR        = (1<<0);
const int HIGH_SPEED   = (1<<7);
const int HARD_CONNECT = (1<<8);

char flags = 0;

int main() {
  flags |= HIGH_SPEED; /* Set high speed connection on */

  /* if ((flags &= ERROR) != 0) */
  /*   printf("ERROR flag is set...\n"); */
  if ((flags &= HIGH_SPEED) != 0)
    printf("High Speed Connection is set...\n");
  else if ((flags &= HARD_CONNECT) != 0)
    printf("Hardline Connection is set...\n");
  else
    printf("No Error Detected \n");

  return 0;
}
