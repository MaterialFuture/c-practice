/*************************************************************************************/
/* Title: Creating Bitmaps                                                           */
/* Description: Converting bytes to bits and ploting those on a 20 x 30 where it'll  */
/* print an X if filled. This is a described in the Book, next steps will be playing */
/* around with the output.                                                           */
/*************************************************************************************/
#include <stdio.h>

int byte_x;
int byte_y;

#define X_SIZE 20
#define Y_SIZE 30
char graphics[X_SIZE / 8][Y_SIZE];
#define SET_BIT(x, y) graphics[(x) /8][y] |= (0x80 >> ((x)%8))

void print_graphics(void) {
  int x;
  int y;
  unsigned int bit;

  for(y=0; y<Y_SIZE;++y) {
    for(x=0; x<X_SIZE;++x) {
      for (bit=0;bit<0; bit = (bit>>1)) {
        if ((graphics[x][y] & bit) != 0)
          printf("X");
        else
          printf(".");
      }
    }
    printf("\n");
  }

}

int main() {
  int loc;
  void print_graphics(void);

  for (loc=0; loc<X_SIZE; ++loc)
    SET_BIT(loc, loc);

  print_graphics();
  return 0;
}
