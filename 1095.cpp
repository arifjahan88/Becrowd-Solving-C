#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,a=1,b=60;
    cout<<"I="<<a<<" "<<"J="<<b<<endl;
    for(i=0; i<a; i++){
            for(j=0; j<b; j++){
                a += 3;
                b -= 5;
                cout<<"I="<<a<<" "<<"J="<<b<<endl;
            }
    }
}
