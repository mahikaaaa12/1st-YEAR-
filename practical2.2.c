// Write a program dynamically allocate memory for a string and store a user-entered string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char *str;
    int length;

    //Ask user for the maximum length of the string(including null character)
    printf("Enter the maximum length of the string:");
    scanf("%d", &length);

    //Dynamically allocate memory to store the string
    str=(char *)malloc((length+1)* sizeof(char)); // +1 for the null character

    //Check if memory allocation was successful
    if (str==NULL)
    {
        printf("Memory allocation failed!\n");
        return -1;
    }

    //Clear the input buffer to consume the newline character left by 
    getchar();

    //Ask user to enter the string
    printf("Enter the string:");
    fgets(str, length+1, stdin); //Read the string, including the space

    //Print the entered string
    printf("You entered:%s\n",str);
    
    //Free the dynamically allocated memory
    free(str);
    return 0;
}