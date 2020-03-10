/*****************************************************************/
/* Title: Example - Messenger                                    */
/* Desc: An example mesenger program that sets the data messages */
/*****************************************************************/
#include <stdio.h>
#define DATA_MAX 1024

struct open_msg {
  char name[30];
};

struct read_msg {
  int length;
};

struct write_msg {
  int length;
  char data[DATA_MAX];
};

struct close_msg {};

const int OPEN_CODE=0;
const int READ_CODE=1;
const int WRITE_CODE=2;
const int CLOSE_CODE=3;

struct msg {
  int msg;
  union {
    struct open_msg open_data;
    struct read_msg read_data;
    struct write_msg write_data;
    struct close_msg close_data;
  } msg_data;
};
