#include <stdio.h>
#include <stdlib.h>
#include <string.h> /* when using things related to strings don't forget to include the strings lib */

int main() {
  char name[100];
  FILE *in_file;

  printf("Name? ");
  fgets(name, sizeof(name), stdin); /* get the input (stdin) and set to name */
  name[strlen(name)-1] = '\0';      /* remember to strip that bit off the end of a string */
  in_file = fopen(name, "r");       /* open the file from name */

  if (!in_file || in_file == NULL) {         /* if file is empty or doesn't contain anything */
    fprintf(stderr, "couldn't open file\n"); /* print that we couldn't open file */
    exit(8);
  }

  printf("Found file...\n"); /* File is found */
  fclose(in_file);           /* Remember to close that file now that you found it */

  return 0;
}
