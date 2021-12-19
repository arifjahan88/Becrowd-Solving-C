#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        int a,b;
        double c,d,result3;
        scanf("%d %d", &a, &b);
        c=a;
        d=b;
        if(d == 0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            result3 = c/d;
            printf("%.1lf\n", result3);
        }
    }
}
