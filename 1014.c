#include<stdio.h>
int main(){
    int X;
    float Y;
    double result;
    scanf("%d %f", &X, &Y);
    result = (X/Y);
    printf("%.3lf km/l\n", result);


    return 0;
}
