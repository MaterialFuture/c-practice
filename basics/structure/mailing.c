/***********************************************************************************************************/
/* Title: Mailing List                                                                                     */
/* Desc: This is exercise 12-1, this is an example of how to implement structures is a useful application. */
/***********************************************************************************************************/
#include <stdio.h>

const int MAX_ENTRIES = 2;
struct mailing {
  char name[60];
  char address_1[60];
  char address_2[60];
  char city[20];
  char state[20];
  long int zip;
} list[MAX_ENTRIES];

struct mailing list[MAX_ENTRIES];

char input[60];
int value;
char yesno;

void print_data() {
  int entries;
  while(1){
    entries++; /* How many entries */

    printf("New Mailing Address, `y` or `n`?\n");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%c", &yesno);

    switch(yesno){ /* nice little yes no thing */
      case 'y':
        continue;  /* keep on trucking */
      case 'n':
        printf("Quitting...");
        break;     /* STOP THE TRAIN!! */
      default:
        printf("Quitting...");
        break;     /* STOP THE TRAIN!! */
    }

    printf("Name: \n");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", &list.name); /* Not right */
    if((&list.name == 'exit'))       /* Figure out how to access list pointer */
      break;

    printf("Address 1: \n");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", &list.name); /* Not right */
    if((&list.address_1 == 'exit'))
      break;

    printf("Address 2: \n");
    fgets(input, sizeof(input), stdin);
    sscanf(input, "%s", &list.name); /* Not right */
    if((&list.address_2 == 'exit'))
      break;

    /* ... */

    /* Stop the while loop when you reach the max entries
     * set number of entries to the Max entries if not stopped
     * If loop is stopped then set number_of_entries to how many counts */
  }

  /* If any of the mailing list items contain NIL or errors then stop
   * Of not then run the thing below */


  int i;
  for (i=0;i < number_of_entries;i++) {
    list_ptr[i] = &list[i];
  }
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
