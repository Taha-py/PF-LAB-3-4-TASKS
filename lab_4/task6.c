#include <stdio.h>
 
int main() {
    int tem,pre;
    printf("Enter temperature: ");
    scanf("%d",&tem);
    printf("Enter pressure: ");
    scanf("%d",&pre);
    if(tem>100||pre>250){
        printf("Compnay SHUT-DOWN!!");
    }else if(tem<=100&&tem>=85 && pre>=200&&pre<=250){
        printf("WARNING!!");
    }else{
        printf("STSTEM UNDER CONTROL");
    }
    return 0;
}
