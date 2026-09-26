#include <stdio.h>
int main() {
    int tot,plan,min,plan_exed,exed;
    printf("Plan 1 (Rs. 500 for 1000 minutes)\n");
    printf("Plan 2 (Rs.800 for 2000 minutes)\n");
    printf("Plan 3 (Rs. 1200 for unlimited minutes)\n");
    printf("Plan 4 (custom plan billed at Rs.1/minute)\n");
    printf("\nEnter your plan number: ");
    scanf("%d",&plan);
    switch(plan){
        case 1:
            printf("Plan 1 (Rs. 500 for 1000 minutes)\n");
            printf("Total bill is: 500");
            printf("\nWant to exceeds plan limits: (1.YES   2.NO): ");
            scanf("%d",&plan_exed);
            switch(plan_exed){
                case 1:
                    printf("Enter Exceed limit: ");
                    scanf("%d",&exed);
                    printf("Your Total amount exced limit amount is: %d",500+(exed*2));
                    break;
                case 2:
                    printf("Ok program stop!");
                    break;
            }
        break;
        case 2:
            printf("Plan 2 (Rs.800 for 2000 minutes)\n");
            printf("Total bill is: 800");
            printf("\nWant to exceeds plan limits: (1.YES   2.NO): ");
            scanf("%d",&plan_exed);
            switch(plan_exed){
                case 1:
                    printf("Enter Exceed limit: ");
                    scanf("%d",&exed);
                    printf("Your Total amount after exced limit amount is: %d",800+(exed*2));
                    break;
                case 2:
                    printf("Ok program stop!");
                    break;
            }
        break;
        case 3:
            printf("Plan 3 (Rs. 1200 for unlimited minutes)\n");
            printf("Total bill is: 1200");
        break;
        case 4:
            printf("Plan 4 (custom plan billed at Rs.1/minute)\n");
            printf("Enter number of mintues: ");
            scanf("%d",&min);
            printf("Total bill is: %d",min);
        break;
        default:
            printf("Invalid Input");
    }
    return 0;
}
