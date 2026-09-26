int main() {
    int inc;
    float gpa;
    printf("Enter CGPA: ");
    scanf("%f",&gpa);
    printf("Enter income: ");
    scanf("%d",&inc);
    if(gpa>=3.7&&inc<=50000){
        printf("FULL SCHOLARSHIP");
    }else if(gpa>=3.3&&inc<=100000){
        printf("HALF SCHOLARSHIP");
    }else{
        printf("NO Scholarship is awarded");
    }
    return 0;
}
