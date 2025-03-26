//Write a program to demonstrate accessing array elements using pointers
#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50}; //Declare and initialize an array
    int *ptr;  //Pointer to an integer
    int size=sizeof(arr)/sizeof(arr[0]); //Calculate the size of the array
    
    //Assign the address of the first element of the array to the pointer
    ptr=arr;
    printf("Accessing array elements using array indexing;\n");
    for(int i=0;i<size; i++){
        printf("arr[%d]=%d\n", i, arr[i]);
    }

    printf("\nAccessing array elements using pointers:\n");
    for (int i = 0; i < size; i++)
    {
        //Using pointer arithmetic to access array elements
        printf("*(ptr + %d) = %d\n", i, *(ptr +i));
    }
    
    return 0;
}