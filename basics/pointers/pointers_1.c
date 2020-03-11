/******************************************************************/
/* Title: Pointer Basics                                          */
/* Desc: Getting down the basics of pointers and how to use them. */
/******************************************************************/
#include <stdio.h>

void inc_count(int *count_ptr) {
  (*count_ptr)++;
}

int main() {
  int thing = 4;  /* declare thing as an integer */
  int *thing_ptr; /* declare a pointer to thing */
  printf("The Variable:\t%d\n", thing);

  thing_ptr = &thing; /* point to thing */
  *thing_ptr = 5;     /* set thing to 5 */
  printf("New value set by pointer:\t%d\n", thing); /* This should print 5 since the pointer set thing to 5 */

/* Multiple pointers can point to the same thing */
  int something = 1;

  int *first_ptr;
  int *second_ptr;
  first_ptr  = &something;
  second_ptr = first_ptr;

  printf("First Pointer:\t%d\nSecond Pointer:\t%d\n",
         *first_ptr,
         *second_ptr
         ); /* Should print out 1 */

  int count = 0;
  const int CNT_MAX = 10;

  while(count < CNT_MAX)
    inc_count(&count);

  printf("Count:\t%d\n", count);


  const char *answer_ptr = "Forty-Two"; /* The pointer is set to a constant */
  answer_ptr = "Fifty-One";             /* The variable is not */
  printf("Answer:\t%s\n", answer_ptr);

  printf("Test line\n");

  /* char *const name_ptr = "Test"; */
  /* *name_ptr = 'B'; */
  /* printf("Answer:\t%c\n", *name_ptr); */
  /* causes a seg fault, is supposed to change to a char 'B' */

  const char *const title_ptr = "Title"; /* Creates a const that cannot be changed like a normal variable, or by pointer */
  printf("%s\n", title_ptr);             /* Should be "Title" */



  return 0;
}


/* NOTE: All pointer are is setting the address of an object to a pointer so you can reasign values in the memory. */
