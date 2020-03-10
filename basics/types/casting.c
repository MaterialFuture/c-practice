/******************************************************************************************/
/* Title: Type Casting                                                                    */
/* Desc: Perfect example of how to use type casting to change from ints to floats simply. */
/******************************************************************************************/
#include <stdio.h>

int won, lost;
float ratio;

int main() {
  won = 14;
  lost = 9;
  ratio = ((float) won) / ((float) lost);

  printf("This Season's Win/Loss Ratio For Manchester United...\n\n");
  printf("Won:\t%d\nLost:\t%d\nRatio:\t%f\n", won, lost, ratio);

  return 0;
}
