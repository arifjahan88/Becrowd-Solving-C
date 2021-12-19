
#include<iostream>
using namespace std;

int main()
{
    int n,j,a=0,b=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>j;
        if(j>=10 && j<=20)
            a++;
        else
            b++;
    }
    cout<<a<<" in"<<endl;
    cout<<b<<" out"<<endl;

    return 0;
}
