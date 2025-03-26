//Write a program to demonstarte the call by value and call by reference
#include <stdio.h>
//Function to demonstrate call by value
void callByValue(int a){
    a=a+10;  //Modify the local copy of the variable
    printf("Inside callByValue function:a=%d\n", a);
} 

//Function to demonstrate call by reference
void callByReference(int *a){
    *a=*a=10;  //Modify the value at the memory address pointer
    printf("Inside callByReference function: a=%d\n", *a);
}

int main(){
    int num=5;

    //Demonstrating call by value
    printf("Before callByValue function:num=%d\n", num);
    callByValue(num);   //Pass the value of num
    printf("After callByValue function:num=%d\n", num);   //num remains unchanged

    //Demonstrating call by reference
    printf("\nBefore callByReference function:num=%d\n", num);
    callByReference(&num);  //Pass the address of num
    printf("After callByReference function:num = %d\n", num);  //num is modified

    return 0;
}