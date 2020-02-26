#include <stdio.h>

int arr[3][3];
int arr_goal[3][3] = {
 {1,2,3},
 {2,4,6},
 {3,6,9}
};
int i,j;

int main() {

    /* Goal: Make arr look like this */
    printf("Multiplication table (predefined): \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d", arr_goal[i][j]);
        }
        printf("\n");
    }

    /* Goal: Set arr to be like arr_goal */
    printf("Multiplication table (generated): \n");
    for(i=1; i<4; i++) { /*Nested for loop that will created the multidimentional array*/
        for(j=1; j<4; j++) {
            arr[i][j] = i*j;
            printf("%d", arr[i][j]); /*After it's set it will print it, allowing it to look as intended*/
        }
        printf("\n");
    }
    /*By following this same method you could do this for whatever size multidimentional array*/

    return(0);
}
