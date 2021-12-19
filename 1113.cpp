#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while(1)
    {
        cin>>a>>b;
        if (a>b)
        {
            cout<<"Decrescente"<<endl;
        }
        else if (a<b)
        {
            cout<<"Crescente"<<endl;
        }
        else if (a==b) break;

    }
}

