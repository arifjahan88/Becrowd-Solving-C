#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[46];
    cin>>n;
    arr[0] = 0;
    arr[1] = 1;
    cout<<arr[0]<<" "<<arr[1]<<" ";
    for(int i = 2; i < n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
        if(i == (n-1)){
            cout<<arr[i];
        }
        else{
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
}
