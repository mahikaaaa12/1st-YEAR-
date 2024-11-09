#include <stdio.h>
#include <string.h>

int main() {
    // Predefined username and password
    char correctUsername[] = "admin";
    char correctPassword[] = "password123";
    
    // Variables to store user input
    char username[20];
    char password[20];
    
    // Get the username from the user
    printf("Enter username: ");
    scanf("%s", &username);
    
    // Get the password from the user
    printf("Enter password: ");
    scanf("%s", &password);
    
    // Check if the username and password match the predefined values
    if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password.\n");
    }
    
    return 0;
}
