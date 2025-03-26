//Write a program to demonstrate the use of pointer to pointer
#include <stdio.h>
int main(){
    int num=10;  //A regular integer variable
    int *ptr;  //Apointer to an integer
    int **ptr2; //A pointer to a pointer to an integer
    ptr =&num;  //Assign the address of num to ptr
    ptr2=&ptr;  //Assign the address of ptr to ptr2

    //Accessing the value of num using the pointer to a pointer
    printf("Value of num:%d\n", num);     //Direct Access
    printf("Value of num using ptr:%d\n", *ptr);    //Access through ptr
    printf("Value of num using ptr2:%d\n", **ptr2);    //Acess through ptr2

    //Modifying the value of num using the pointer to pointer 
    **ptr2=20;  //Dereferencing ptr2 twice to modify the value of num

    //Printing the modified value
    printf("\nAfter modification:\n");
    printf("Value of num:%d\n", num);     //Direct Access
    printf("Value of num using ptr:%d\n", *ptr);      //Access through ptr
    return 0;
}
