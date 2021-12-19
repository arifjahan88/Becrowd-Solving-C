#include<stdio.h>
int main()
{
    int n,h=0,m=0,s=0;
    scanf("%d", &n);

    h = n / 3600;
    n = n % 3600;
    m = n / 60;
    s = n % 60;

    printf("%d:%d:%d\n", h,m,s);



    return 0;
}
