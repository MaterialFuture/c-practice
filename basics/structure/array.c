/*********************************************************************/
/* Title: Array of Stuctures                                         */
/* Desc: Structures and arrays combined. Shown is an example of how. */
/*********************************************************************/
#include <stdio.h>

struct time {
  int hour;
  int minute;
  int second;
};
const  int MAX_LAPS = 4;
struct time lap[MAX_LAPS];

int main() {
  int count = 0;
  int hour;
  int minute;
  int second;
 
  while(count < MAX_LAPS){
    hour   = lap[count].hour;
    minute = lap[count].minute;
    second = lap[count].second;
    ++count;
  }
  printf("%d:%d:%d\n", hour, minute, second);

  return 0;
}

/* NOTE: This is purely an example, will not run. For a better example check the mailing.c file */
