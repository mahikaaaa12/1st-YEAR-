// Define a macro for a constant value and use it to calculate the perimeter of a rectangle

#include <stdio.h>

//Define a macro for a constant value(e.g. LENGTH and WIDTH)
#define LENGTH 10
#define WIDTH 5

//Define a macro to calculate the perimeter of a rectangle
#define PERIMETER(l,w) (2 * ((l) + (w)))

int main(){
    //Calculate and display the perimeter
    printf("Perimeter of the rectangle:%d\n", PERIMETER(LENGTH,WIDTH));
    return 0;
}