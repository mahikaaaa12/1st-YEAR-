//write a program to demonstrate file inclusion using #include user's own header
//myheader.c
#include <stdio.h>
//function definition for add
int add(int a, int b){
    return a+b;
}

//main.c
#include <stdio.h>
int main(){
    int num1, num2;

    //Input two numbers
    printf("Enter two numbers:");
    scanf("%d %d", &num1,&num2);
    //Call the add function and display result
    printf("Sum=%d\n",add(num1,num2));
    return 0;
}