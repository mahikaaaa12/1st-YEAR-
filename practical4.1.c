//Write a program to demonstrate an array of pointer to strings
#include <stdio.h>
int main(){
    //Declare an array of pointers to strings
    char *fruits[]={
        "Apple",
        "Banana",
        "Cherry",
        "Date",
        "Elderberry"
    };
    int size= sizeof(fruits)/sizeof(fruits[0]);  //Calculate the numbe rof elements

    //Accessing and printing the strings using array of pointers
    printf("List of fruits:\n");
    for(int i=0;i<size;i++){
        printf("fruits[%d]=%s\n",i, fruits[i]);
    }

    //Accessing and printing the strings using pointer arithmetic
    printf("\nAccessing fruits using pointer arithmetic:\n");
    for (int i = 0; i < size; i++)
    {
        printf("*(fruits+%d)=%s\n", i, *(fruits+i));
    }
    return 0;  
}