#include<stdio.h>
int main()
{
    int a,b;
    double result;

    scanf("%d%d", &a,&b);
    result = (a*b)/12.0;
    printf("%.3lf\n", result);

    return 0;
}
