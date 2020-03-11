/****************************************************************************************/
/* Title: Pointers and Arrays                                                           */
/* Desc: Getting and Setting values in arrays using pointers                            */
/* Getting the memory allocated for the pointer as well as the ascii value of the chars */
/****************************************************************************************/
#include <stdio.h>

int main() {
  const int ARR_1_SIZE = 5;
  char arr[ARR_1_SIZE];
  char *arr_ptr = &arr[0];

  /* Example of me setting the chars in the array using the pointer */
  int i;
  const char ASCII_A = 0x61;
  for (i=0; i<ARR_1_SIZE; i++) {
    if(i == 0){
      *arr_ptr = ASCII_A+i;
    } else {
    *(arr_ptr+i) = ASCII_A+i;
    }
    /* printf("test:\t%d\n", i); */
  }
  for (i=0; i<ARR_1_SIZE; i++) {
    printf("Array[%d]\t%c\n",i, arr[i]);
  }
  printf("\n");

  /* Now to show off how to view the addresses in memory of those chars in the array as well as the ascii values */
  printf("&Array[index]\tArray[index]\n");
  for (i=0; i<ARR_1_SIZE; i++) {
    printf("%-10p\t0x%x\n", &arr[i], arr[i]);
  }
  printf("\n");

  return 0;
}
