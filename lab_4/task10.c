#include <stdio.h>
int main() {
    int zone,speed;
    printf("ZONE\n1. School\n2.Residential\n3.Highway\n");
    printf("\nEnter Zone: ");
    scanf("%d",&zone);
    printf("Enter speed(km/h): ");
    scanf("%d",&speed);
    switch(zone){
    case 1:
        if(speed>30){
            if(speed>50){
                printf("Your Fine on exceed speed in School zone's limit: %d",2000);
            }
            else if(speed>30){
                printf("Your Fine on speed in School zone's limit: %d",1000);}
            }else{
                printf("Speed is normal\nNO FINE");
            }
        break;
    case 2:
        if(speed>50){
            if(speed>70){
                printf("Your Fine on exceed speed in Residential zone's limit: %d",2000);
            }
            else if(speed>50){
                printf("Your Fine on speed in Residential zone's limit: %d",1000);}
            }else{
                printf("Speed is normal\nNO FINE");
            }
        break;
    case 3:
        if(speed>100){
            if(speed>120){
                printf("Your Fine on exceed speed in Highway zone's limit: %d",2000);
            }
            else if(speed>100){
                printf("Your Fine on speed in Highway zone's limit: %d",1000);}
            }
            else{
                printf("Speed is normal\nNO FINE");
            }
        break;
    default:
        printf("Invalid Zone");
        break;
    }
    return 0;
}
