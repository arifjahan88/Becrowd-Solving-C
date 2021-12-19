#include <stdio.h>
void fun(int n)
{
    if(n == 0)
        return 0;
        else if(n == 1)
            return 1;
            else
                return fun(n-1)+fun(n+1);


}
int main( )
{
    int n = 10;
    int ans = fun(n);
    printf("%d", ans);
    return  0;
}


