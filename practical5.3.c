//Write a program to calculate the sqaure of a number using macro
#include <stdio.h>
#define SQUARE(x) (x*x)
int main(){
    int num;
    //Input a number
    printf("Enter a number:");
    scanf("%d", &num);
    //Calculate and display the square of the number
    printf("Square of %d is: %d\n", num, SQUARE(num));
    return 0;
}