#include<stdio.h>
int main()
{
    int i, n, sum=0;
    printf("Enter the limit: ");
    scanf("%d", &n);
    for(i=1; i<=n; i+=6)
    {
        sum+=i;
    }
    printf("sum of the numbers = %d", sum);
    return 0;

}
