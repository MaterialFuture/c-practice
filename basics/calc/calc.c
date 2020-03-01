/**************************************************/
/* Title: Four Function Calculator                */
/* Description  A simple four Function Calculator */
/**************************************************/
#include <stdio.h>

char operator;   /* Maths operators such as +, -, *, and / stored as char */
char input[100]; /* The user input, up to 100 char in the char array */
int  value;      /* The value you wish to do whatever with */
int  result = 0; /* The value stored before/after calculation */

int main() {
    while (1) {                                    /* If 1 (meaning true) that it's on, then run the while loop, 0 would indicate that the program is done in C */
        printf("Result: %d\n", result);            /* Print the result */
        printf("Enter Operator and Number: ");     /* Prompt User to enter operator and value */
        fgets(input, sizeof(input), stdin);        /* Get user input */
        sscanf(input, "%c %d", &operator, &value); /* Scan input and store in appropriate variables */

        if ((operator == 'q') || (operator == 'Q')) { /* q =quit */
            printf("Quiting...\n");                   /* Print that the program is quiting */
            break;                                    /* Break out of the program */
        }

        switch (operator) {      /* Grab the operator and provide logic for waht to do */
            case '+':            /* if '+' char then do */
                result += value; /* Add the result and value */
                break;
            case '-':
                result -= value;
                break;
            case '*':
                result += value;
                break;
            case '/':
                if (value == 0) { /* If divide by zero then print error */
                    printf("Error: Cannot Divide by Zero, sorry bud \n");
                } else {          /* If not zero then go ahead */
                result /= value;
                }
            default: /* Set the default to print unknown operator, but continue on */
                printf("Error: Unknown operator, %c\n", operator);
        }

        /* NOTE: If/Else Version */
        /* if ((operator == 'q') || (operator == 'Q')) { /\* q =quit *\/ */
        /*     printf("Quiting...\n"); */
        /*     break; */
        /* } else if (operator == '+') { /\* Adds *\/ */
        /*     result += value; */
        /* } else if (operator == '-') { /\* Subtract *\/ */
        /*     result -= value; */
        /* } else if (operator == '*') { /\* Multiply *\/ */
        /*     result *= value; */
        /* } else if (operator == '/') { /\* Divide *\/ */
        /*     if (value == 0) { /\* If divide by zero then print error *\/ */
        /*         printf("Error: Cannot Divide by Zero, sorry bud \n"); */
        /*     } else {          /\* If not zero then go ahead *\/ */
        /*         result /= value; */
        /*     } */
        /* } else { /\* If operator isn't one of four specified above then print error *\/ */
        /*     printf("Unknown operator: %c\n", operator); */
        /* } */

    }

    return(0); /* Can't forget that return 0, it's good practice */
}
