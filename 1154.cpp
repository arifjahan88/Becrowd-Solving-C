#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    double result, sum = 0, cnt = 0;
    while(1)
    {
        cin>>n;
        if (n < 0)
        {
            break;
        }
        sum = sum + n;
        cnt = cnt + 1;

    }

    result = sum / cnt;
    printf("%.2lf\n", result);

}

