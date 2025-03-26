//Write a program to include different code sections based on a macro value
#include <stdio.h>
//Define a macro to control different code sections
#define MODE 2  //Changes this value to switch code sections

int main(){
    #if MODE == 1
        printf("Mode 1: Running addition code\n");
        int a=5, b=3;
        printf("Sum=%d\n", a+b);
    #elif MODE == 2
        printf("Mode 2: Running multiplication code\n");
        int x=4,y=6;
        printf("Product=%d\n", x*y);
    #else
        printf("Invalid mode:No operation performed\n");
    #endif
    return 0;
}