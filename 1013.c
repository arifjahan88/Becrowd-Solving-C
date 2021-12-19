#include<stdio.h>
int main()
{

    int A,B,C,d;
    scanf("%d %d %d", &A,&B,&C);
    d = (A+B+abs(A-B))/2;
    d = (d+C+abs(d-C))/2;
    printf("%d eh o maior\n", d);

    return 0;
}
