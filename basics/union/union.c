/*************************************/
/* Title: Unions                     */
/* Desc: Showing off how unions work */
/*************************************/
#include <stdio.h>

union value {
  long int i_value;
  float    f_value;
} data;

int i;
float f;

int main() {
  /* Define int value, this sets the union now to that */
  data.i_value = 5;
  i = data.i_value;
  printf("%d\n", i);

  /* Set the float value, now the union will overwrite the i_val for f_val */
  data.f_value = 3.0;
  f = data.f_value;
  printf("%f\n", f);

  data.i_value = 22; /* overwrite the f, the previous int has already been overwritten */
  i = data.i_value;  /* redefine this since if you dont and try to call i it will be the previous values ie 5 */
  printf("%d\n", i);

  return 0;
}
