#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tmp;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        int temp = 0;
        if(x > y)
        {
            tmp = x;
            x = y;
            y = tmp;
            for(int j = x+1; j < y; j++)
            {
                if(j%2 != 0)
                {
                    temp = temp + j;
                }
            }
        }
        else
        {
            for(int j = x+1; j < y; j++)
            {
                if(j%2 != 0)
                {
                    temp = temp + j;
                }
            }
        }
        cout<<temp<<endl;
    }
}
