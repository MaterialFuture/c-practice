#include <stdio.h>
#include <string.h>

char hello[6];
char world[6];
char hw[13];
int i;
char user_input[20];
char first_name[20];
char last_name[20];

int main(){
    /* Print using just the standard way everyone does */
    printf("Hello World\n");

    /*
     * Print via arrays and assigning chars
     *
     * Not the correct wa obviously, it's just for fun
     */
    hello[0] = 'H';
    hello[1] = 'e';
    hello[2] = 'l';
    hello[3] = 'l';
    hello[4] = 'o';
    hello[5] = '\0';

    world[0] = 'W';
    world[1] = 'o';
    world[2] = 'r';
    world[3] = 'l';
    world[4] = 'd';
    world[5] = '\0';

    for(i=0; i<6; i++){
        printf("%c", hello[i]);
    }
    printf(" ");
    for(i=0; i<6; i++){
        printf("%c", world[i]);
    }
    printf("\n");

    /* Print by just assigning a string using the string library */
    strcpy(hw, "Hello World");
    printf("%s\n", hw);

    /* WIP - Getting user input for strings/chars */
    /* fgets(user_input, sizeof(user_input), stdin); */
    /* sscanf(user_input, "%c", &first_name); */
    /* printf("Hello, %s\n", first_name); */

    return(0);
}
