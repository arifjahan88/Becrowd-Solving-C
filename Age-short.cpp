#include<bits/stdc++.h>
using namespace std;
int a[20000005];

int main()
{

    int n;
    scanf("%d", &n);

    while(n != 0 && n<=2000000)
    {
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        sort(a,a+n);
        printf("%d", a[0]);
        for(int i = 1; i < n; i++)
        {

            printf(" ");
            printf("%d", a[i]);

        }
        printf("\n");
        scanf("%d", &n);
    }
    return 0;
}
