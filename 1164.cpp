#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, sum = 0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        sum = sum + 1;
        if(a%sum == 0){
            cout<<"Perfect"<<endl;
        }
        else{
            cout<<"not"<<endl;
        }
    }
}
