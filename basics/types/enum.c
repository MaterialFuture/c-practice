#include <stdio.h>

/* set an enumerated data type to that of every week day */
enum week_day {
  SUNDAY,
  MONDAY,
  TUESDAY,
  WEDNESDAY,
  THURSDAY,
  FRIDAY,
  SATURDAY
};

int main() {
  enum week_day today = TUESDAY; /* Define what tpday is as a class of week_day with the variable set to something legal */
  return 0;
}
