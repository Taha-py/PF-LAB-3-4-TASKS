#include <stdio.h>
 
int main() {
    int status,ord_amt,loc;
    printf("Enter Order amount : ");
    scanf("%d",&ord_amt);
    printf("customer is a premium member:\n(1. Yes   2. No): ");
    scanf("%d",&status);
 
    if(ord_amt>3000&&status==1){
        printf("\tCongratulation!!\nWe offered you free delivery\n");
        printf("For COD\n");
        printf("Enter Location:\n(1.With in city   2.Out of city): ");
        scanf("%d",&loc);
        if(ord_amt<=50000&&loc==1){
            printf("Cash on Delivery (COD) is available");
        }
        else{
            printf("Soryy! COD is not available");
        }
    }
 
    else{
        printf("Sorry!!Free delivery is not offered!!");
    }
    return 0;
}
