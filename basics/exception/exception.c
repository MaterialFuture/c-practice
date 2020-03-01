/*********************************************************************/
/* Title: Exception Handler                                          */
/* Description: Example of how simple exception handling can be done */
/*********************************************************************/
/* #include "exception.h" */
#include <stdio.h>
int x;

void error_exception(int x) {
  printf("Error: status %d not found...\n", x);
}

void handle_exception(int x) {
  if(x == 404)
    return error_exception(x); /* if 404 then show error exception */
  printf("Unkown status: %d\n", x);
}

int main(){
  printf("Checking HTTP connection...\n");
  printf("Getting back HTTP status...\n");
  int http_status = 404;         /* Set a temp variable that is just used for the example exception, otherwise thise could be initialized global or set as static here */
  handle_exception(http_status); /* Trigger Exception that will show 404 bringing up an error */
  return(0);
}
