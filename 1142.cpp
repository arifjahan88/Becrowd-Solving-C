#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, tmp = 1;
    cin>>n;
    cout<<"1"<<" "<<"2"<<" "<<"3"<<" "<<"PUM"<<endl;
    for(int i = 1; i < n; i++)
    {
        tmp = tmp + 4;
        cout<<tmp<<" "<<tmp + 1<<" "<<tmp + 2<<" "<<"PUM"<<endl;

    }
}
