/********************************************************/
/* Title: Character Count                               */
/* Desc: Gets the character count of the file specified */
/********************************************************/
#include <stdio.h>
#include <stdlib.h>
const char FILE_NAME[] = "input.txt";

int main() {
  int i = 0;     /* count, you should recognize this one */
  FILE *in_file; /* Your input file set as a pointer for FILE */
  int ch;        /* EOF for in file */
  in_file = fopen(FILE_NAME, "r");

  if (!in_file || in_file == NULL) { /* If no file or file is null then print cannot open.
                                     * Change this to output a specific message for each case */
    printf("Cannot open %s\n", FILE_NAME);
    exit(8);
  }

  while (1) {
    ch = fgetc(in_file); /* get file as set a ch */
    if (ch == EOF)       /* If end of file then break loop */
      break;
    ++i;                 /* Character exists so keep going */
  }
  printf("Number of characters in %s is %d\n", FILE_NAME, i); /* Print the number of characters in file */

  fclose(in_file); /* close file, remember this as it'll affect memory */
  return 0;
}
