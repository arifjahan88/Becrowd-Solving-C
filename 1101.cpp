#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,temp;
    while(1)
    {
        cin>>m>>n;
        if (m == 0 || n == 0 || m < 0 || n < 0){
            break;
        }
        else if (m > n)
        {
            temp = m;
            m = n;
            n = temp;
            int tmp = 0;
            for (int i = m; i < n+1; i++)
            {
                cout<<i<<" ";
                tmp = tmp + i;
            }
            cout<<"Sum="<<tmp<<endl;
        }
        else
        {
            int tmp = 0;
            for (int i = m; i < n+1; i++)
            {
                cout<<i<<" ";
                tmp = tmp + i;
            }
            cout<<"Sum="<<tmp<<endl;
        }
    }
}
