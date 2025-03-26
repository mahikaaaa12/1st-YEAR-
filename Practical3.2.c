#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>

//Function to swap two numbers using pointers
void swap(int *a, int *b){
    int temp;
    temp = *a; //Store the value of 'a' in 'temp'
    *a = *b; //Assign the value of 'b' to 'a'
    *b = temp; //Assign the value of 'temp'(original 'a') to 'b'
}

int main(){
    int num1, num2;
    
    //Input two numbers
    printf("Enter the first number:");
    scanf("%d", &num1);
    printf("Enter the second number:");
    scanf("%d", &num2);

    //Display the numbers before swapping
    printf("\nBefore swapping: num1=%d, num2=%d\n", num1,num2);

    //Call the swap function and pass the addresses of num1 and num2
    swap(&num1, &num2);

    //Display the numbers after swapping
    printf("After swapping: num1=%d, num2=%d\n", num1,num2);
    return 0;
}