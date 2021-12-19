#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,temp = 1;
    cin>>a>>b;
    for(int i = 1; i <= b; i++)
    {
       if(temp == a){
        cout<<i<<endl;
        temp = 1;
       }
       else{
        cout<<i<<" ";
        temp = temp + 1;
       }
    }
}

