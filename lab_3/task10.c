#include<stdio.h>
int main(){
    float var1;
    printf("Enter floating-point number: ");
    scanf("%f",&var1);
    printf("Number with 2 decimal: %.2f\n",var1);
    printf("Number with 6 decimal: %.6f",var1);
  return 0;
}
