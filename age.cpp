#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n,a[1000];
    cin>>n;

    while(n != 0)
    {
        for(int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cout<<a[0];
        for(int i = 1; i < n; i++)
        {
            cout<<" "<<a[i];

        }
        cout<<"\n";
        cin>>n;
    }
    return 0;
}
