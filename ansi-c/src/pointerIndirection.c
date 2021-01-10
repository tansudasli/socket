#include <stdio.h>

#define SIZE 3

int data[SIZE];   //hold some initial data

void initialize() {
    for (int j = 0; j < SIZE; j++)
        data[j] = j;

    for (int j = 0; j < SIZE; j++)
        printf("%d\t", data[j]);
}

int main(int argc, char **argv) {
    /**
     * multiple indirection **, can be used to imagine Arrays, Lists etc..
     *
     * char **argv is string array. while char *argv is char array (string)
     * so, char **argv or char *argv[] is same (w/ some minor diff.)
     *
     */

    int i = 10;   //value
    int *pi;      //pointer                 int pi[]
    int **ppi;    //pointer to pointer      int *pi[] or  int pi[][] or  a kind of list

    //initialize
    initialize();

    //
    pi = data;     //data is array, cause it is the pointer & the address !! no need to use &data
    ppi = &pi;     // pi's address and data's address are different !! cause it is not an array !! but acts as array :)

    printf("\ndata\t\t pi\t\t ppi\n");
    for (int j = 0; j < SIZE; j++) {

        printf("%d(%p)\t %d(%p)\t %d(%p)  \n", j,  &data[j]
                                     ,*pi, pi
                                     ,**ppi, ppi);

        pi++;
    }
    //for now, ppi is not a list of array.

    return 0;
}