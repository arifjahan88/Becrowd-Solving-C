#include<stdio.h>
int main(){

    char A[10];
    double B,C,result;
    scanf("%s%lf%lf", &A,&B,&C);
    result = B + (C*15)/100;
    printf("TOTAL = R$ %.2lf\n", result);


    return 0;
}
