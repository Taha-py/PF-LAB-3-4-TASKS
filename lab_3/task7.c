#include<stdio.h>
int main(){
    char name;
    int age;
    printf("Enter your first name character: ");
    name = getchar();
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Your first name character: %c\n",name);
    printf("Your age is: %d",age);
return 0;
}
