#include<stdio.h>
int main(){

    double a,b,c,x,y,z;
    scanf("%lf%lf%lf", &a,&b,&c);
    x=(b*b) - (4*a*c);
    if (x<0) printf("Impossivel calcular\n");
        else if (a == 0)printf("Impossivel calcular\n");

        else{
            y = (-b + sqrt(x))/(a+a);
            z = (-b - sqrt(x))/(a+a);
            printf("R1 = %.5lf\n", y);
            printf("R2 = %.5lf\n", z);
        }


return 0;
}
