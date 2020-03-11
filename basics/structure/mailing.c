/***********************************************************************************************************/
/* Title: Mailing List                                                                                     */
/* Desc: This is exercise 12-1, this is an example of how to implement structures is a useful application. */
/***********************************************************************************************************/
#include <stdio.h>

struct mailing {
  char name[60];
  char address_1[60];
  char address_2[60];
  char city[20];
  char state[20];
  long int zip;
};

const int MAX_ENTRIES = 2;
struct mailing list[MAX_ENTRIES];

void print_data() {
  int i;
  for (i = 0; i < MAX_ENTRIES; i++) {
    /* c c c c c ld */
    /* printf("%c\t%c\t%c\t%c\t%c\t%ld\n", */
    printf("%s\t%s\t%s\t%s\t%s\t%ld\n",
           list[i].name,
           list[i].address_1,
           list[i].address_2,
           list[i].city,
           list[i].state,
           list[i].zip
    );
  }
}

/* TODO: Come back to this after going over the lesson on pointers */
