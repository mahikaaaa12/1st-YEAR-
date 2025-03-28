//Define an enumeration for the days of the week and display the name of the day based on its value.
#include <stdio.h>
void SayDay(int x){
    enum Weekdays {Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    switch(x){
        case Monday:
            printf("Monday\n");
            break;
        case Tuesday:
            printf("Tuesday\n");
            break;
        case Wednesday:
            printf("Wednesday\n");
            break;
        case Thursday:
            printf("Thursday\n");
            break;
        case Friday:
            printf("Friday\n");
            break;
        case Saturday:
            printf("Saturday\n");
            break;
        case Sunday:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
            break;
    }
}

int main(){
    int x;
    printf("Enter a number between 1 and 7: ");
    scanf("%d", &x);
    SayDay(x);
    return 0;
}