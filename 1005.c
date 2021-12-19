#include<stdio.h>
int main(){
    double a,b,avg;
    scanf("%lf %lf", &a,&b);
    a=a*3.5;
    b=b*7.5;
    avg = (a+b)/11;
    printf("MEDIA = %.5lf\n", avg);

    return 0;
}
