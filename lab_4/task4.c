#include <stdio.h>
 
int main() {
    int res,gpa,hours;
    printf("Enter your pass status:\n(1. pass   2. Fail): ");
    scanf("%d",&res);
    if(res==1){
        printf("Enter your GPA point: ");
        scanf("%d",&gpa);
        printf("Enter credit hours: ");
        scanf("%d",&hours);
        if(gpa>=2.5&&hours>=3){
            printf("Congratulation!!\nYou have registered in Advanced Programming");
        }
    }
    else{
        printf("Sorry!!\nYou have not eligible to registered in Advanced Programming");
    }
    return 0;
}
