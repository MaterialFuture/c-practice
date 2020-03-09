/*******************************************************************************************/
/* Title: Defines                                                                          */
/* Description: Showing off how defines are handled, without getting into the Pascal stuff */
/*******************************************************************************************/
#include <stdio.h>
#define SQR(x) (x * x) /* Square numbers input here */
/* Globally define the size of arrays
 * #define SIZE 10
 * can alternatively be replaced with a constant variable,
 * however, you need to account for scope. */
const int SIZE = 10;

int main() {
  /* These would normally be be declared outside of the function but
   * due to the scope of const variables they must be ina different scope.*/
  int data[SIZE]; /* Set size of array to SIZE defined as const */
  int twice[SIZE];
  int square[SIZE];
  int i;

  printf("Array\tDoubled\tSquared\n"); /* Titles to columns of data printed below */
  for (i = 1; i <= SIZE; i++) { /* simple for loop to map data to arrays 1-10 */
    data[i] = i;      /* 1, 2, 3, 4, ... */
    twice[i] = i * 2; /* 2, 4, 6, 8, ... */
    square[i] = SQR(i);
    printf("%d\t%d\t%d\n", data[i], twice[i], square[i]);
  }

  return 0;
}
