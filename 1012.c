#include<stdio.h>
int main(){

    float A,B,C;
    scanf("%f %f %f", &A, &B, &C);
    double pi,tri,cir,tra,qua,ret;
    pi = 3.14159;

    tri = .5 * A * C;
    cir = pi * (C*C);
    tra = (A+B) / 2*C;
    qua = B*B;
    ret = A*B;

    printf("TRIANGULO: %.3lf\n", tri);
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", tra);
    printf("QUADRADO: %.3lf\n", qua);
    printf("RETANGULO: %.3lf\n", ret);



    return 0;
}
