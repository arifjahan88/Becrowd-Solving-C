#include<stdio.h>
int main()
{

    int A1,A2,B1,B2;
    float C1,C2,Result;
    scanf("%d %d %f", &A1,&B1,&C1);
    scanf("%d %d %f", &A2,&B2,&C2);
    Result = (B1*C1) + (B2*C2);
    printf("VALOR A PAGAR: R$ %.2f\n", Result);
    // printf = ("VALOR A PAGAR: R$ %.2f\n", Result);

    return 0;
}
