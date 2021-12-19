#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i<n; i++)
    {
        double a,b,c,result;
        cin>>a>>b>>c;
        result = ((a*2)+(b*3)+(c*5)) / 10;
        printf("%.1lf\n", result);
    }
}

