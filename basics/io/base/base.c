#define _GNU_SOURCE /* using getline from GNU source */
#include <string.h>
#include <stdio.h>
#define STRING_LENGTH 80
const char FILE_NAME[] = "input.txt";

char *names[];

int main() {
  char name[STRING_LENGTH];
  int lookup(char const *const name);

  while(1){
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    if(strlen(name) <= 1)
      break;

    name[strlen(name)-1] = '\0';
    if(lookup(name))
      printf("%s is in the list\n", name);
    else
      printf("%s is not in the list\n", name);
  }

  return 0;
}

int lookup(char const *const name) {
  /* int i; */
  /* int ch; */
  FILE *in_file;
  char *line = NULL;
  size_t len = 0;
  ssize_t read;
  in_file = fopen(FILE_NAME, "r");

  if (in_file == NULL) {
    printf("File %s cannot be read... Quitting...\n", FILE_NAME);
    fclose(in_file);
    return 1; /* close early if no file is found */
  }

  /* file found, now check each line */
  while ((read = getline(&line, &len, in_file)) != -1) { /* getline gets all lines in the file*/
    printf("%s", line); /* Print each line */
  }
  /* free(line); */
  fclose(in_file);
  return 0;
}
