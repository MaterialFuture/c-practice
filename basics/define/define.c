/*******************************************************************************************/
/* Title: Defines                                                                          */
/* Description: Showing off how defines are handled, without getting into the Pascal stuff */
/*******************************************************************************************/
#include <stdio.h>
#define SIZE 10 /* Globally define the size of arrays */

int data[SIZE]; /* Set size of array to SIZE defined above */
int twice[SIZE];

int main() {
  int i;

  for (i = 0; i < SIZE; i++) { /* simple for loop to map data to arrays */
    data[i] = i;
    twice[i] = i * 2;

    printf("%d\t%d\n", data[i], twice[i]);
  }

  return 0;
}
