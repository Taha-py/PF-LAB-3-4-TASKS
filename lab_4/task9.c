#include <stdio.h>
int main() {
    int person;
    float wei;
    printf("Enter Number of People: ");
    scanf("%d",&person);
    printf("Enter Weight: ");
    scanf("%f",&wei);
    if(wei>1000||person>10){
        if(wei>1000&&person>10){
            printf("Both are over weighted");
        }
        else if(wei>1000){
            printf("Weight is exceed!");
        }
        else if(person>10){
            printf("Deny the Number of people");
        }
    }else{
        printf("Elevator works normally!");
    }
    return 0;
}
