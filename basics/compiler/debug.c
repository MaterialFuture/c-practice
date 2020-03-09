#include <stdio.h>

int main() {

#ifdef DEBUG
  printf("GCC DEBUG Mode Enable\n"); /* If conditional flag -DDEBUGGER is added at compilation time, then print below */
#endif //DEBUG

  printf("Hello World!\n");
  return 0;
}
