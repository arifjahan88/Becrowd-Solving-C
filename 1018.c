#include<stdio.h>
int main(){
int i,j,n;
    int ar1[7] = {100, 50, 20, 10, 5, 2, 1};
    int ar2[7];
    scanf("%d", &n);
    printf("%d\n", n);

    for(i=0; i<7; i++)
    {
        ar2[i] = n / ar1[i];
        n = n%ar1[i];
    }
    for(j=0; j<7; j++)
    {
        printf("%d nota(s) de R$ %d,00\n", ar2[j],ar1[j]);
    }

    return 0;

}
