/*********************************************************************************************************/
/* Title: Temp Name for file                                                                             */
/* Desc:  Generating a temp name for a file. This is an example from the book to show how pointers work. */
/*********************************************************************************************************/
#include <stdio.h>
#include <string.h>

char *tmp_name(void) {
  char name[30];            /* Name being generated*/
  static int sequence = 0;  /* Sequence number for last digit */

  ++sequence;               /* Move to the next filename */

  strcpy(name, "tmp");

  name[3] = sequence + '0';
  name[4] = '\0';           /* End the string, ie remove the end bit */

  return 0;
}

int main() {
  char *tmp_name(void);     /* Get the name of the temp file */
 
  printf("Name: %s\n", tmp_name());

  return 0;
}
