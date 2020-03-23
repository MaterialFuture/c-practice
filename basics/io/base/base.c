/*****************************************************************************************/
/* Title: Mock Database                                                                  */
/* Desc: Creating A database out of a text file. Showing off what I know of IO and such. */
/*****************************************************************************************/
#define _GNU_SOURCE /* using getline from GNU source, I believe it's posix compliant now but just to be safe. */
#include <string.h>
#include <stdio.h>
#define STRING_LENGTH 80
const char FILE_NAME[] = "input.txt";

char *names[] = {NULL};

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
  /* int ch; */
  int i = 0;
  char *line = NULL;
  size_t len = 0;
  ssize_t read;
  FILE *in_file;
  in_file = fopen(FILE_NAME, "r");

  if (in_file == NULL) {
    printf("File %s cannot be read... Quitting...\n", FILE_NAME);
    fclose(in_file);
    return 1; /* close early if no file is found */
  }

  /* file found, now check each line */
  while ((read = getline(&line, &len, in_file)) != -1) { /* getline gets all lines in the file*/
    line[strlen(line) - 1] = '\0';
    #ifdef DEBUG
    printf("len: %ld\n", len);                           /* Added debug to see if data is coming out correctly */
    printf("read: %ld\n", read);
    #endif // DEBUG
    printf("%s\n", line);                                /* Print each line */
    names[i] = line;                                     /* Assign to array of names - NOTE doesn't currently work */
    i++;                                                 /* NOTE This should increment for every iteration of the
                                                          * while loop but it's not */
  }

  /* Debug - To see all objects in array*/
  #ifdef DEBUG
  for (i=0; i<5; i++){
    printf("%s\n", names[i]);
  }
  #endif // DEBUG

  for (i=0; names[i] != NULL; i++){
    if (strcmp(names[i], name) == 0)
      return (1);
  }

  /* free(line); NOTE I don't think freeing the line is needed in C99, the compiler tells me so I obey T_T */
  fclose(in_file);
  return 0;
}

/* NOTE - This currently doesn't do as I'd like but the idea is that the txt file would act as a database
 * This wouldn't be used in the real world however something similar is used when when creating conf files to use
 * I will be working on getting this to work */
