#include<stdio.h>
#include<conio.h>
int main(){
    int num=10; //A normal integer variable
    int *ptr; //A pointer to an integer
    ptr = &num;  //The pointer ptr holds the address of num

    //Accessing the variable using the pointer
    printf("Value of num:%d\n", num); //Direct access
    printf("Value of num using pointer: %d\n", *ptr);  //Access through pointer

    //Modifying the value of num using its pointer
    *ptr = 20;  //Dereferencing the pointer to modify num

    //printing the modified value
    printf("Modified value of num: %d\n", num);  //Direct access after modification
    printf("Modified value of num using pointer: %d\n", *ptr); //Access through pointer after modification

    return 0;
}