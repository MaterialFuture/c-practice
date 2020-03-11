/******************************************************************************/
/* Title: Bit Fields or Packed Structures                                     */
/* Desc: Allows you to optimize structures so you control the bits are stored */
/* For the most part these aren't used as much, but good to know              */
/******************************************************************************/
#include <stdio.h>

struct sos {           //A 16-bit sos signal
  unsigned int sent:1; //If the sos was sent
  unsigned int read:1; //If it was
  unsigned int txt:14; //14-bit sos message
};

/* It's better to use the packed structures for things like flags so a simple boolean can be stored easily */
struct status {
  unsigned int error:1;
  unsigned int no_signal:1;
  unsigned int parser_error:1;
  char         status_message;
};
