#include <stdio.h>

int arr[] = {3, 6, 4, 1, 6, 0, 4, 1, 23};
int *arr_ptr;

int main() {
  arr_ptr = arr;

  while ((*arr_ptr) != 0) /* Loop through the array and find where the zero is */
    ++arr_ptr;            /* The pointer is used in place of an iterator */

  /* Loop through the array? Causing Errors on GCC for some reason */
  /* unsigned long int i; */
  /* for (i = 0; i<sizeof(arr_ptr); i++) { */
  /*   printf("%x\t", arr); */
  /* } */

  printf("Number of elements before 0: %ld\n", arr_ptr - arr); /*  */

  return 0;
}
