#include <string.h>
#include <stdio.h>
#define STRING_LENGTH 80

int main() {
  char name[STRING_LENGTH];

  int lookup(char const *const name);

  while(1){
    printf("Enter name: \n");
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
  static char *list[] = {
      "John",
      "Jim",
      "Clyde",
      NULL
  };
  int i;
  for(i=0; list[i] != NULL; ++i) {
    if (strcmp(list[i], name) == 0)
      return(1);
  }
  return 0;
}
