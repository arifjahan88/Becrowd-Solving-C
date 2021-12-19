#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,a=1,b=8;
    for(i=0; i<5; i++){
            for(j=0; j<3; j++){
                b -= 1;
            cout<<"I="<<a<<" "<<"J="<<b<<endl;
            }
            a += 2;
            b=8;
    }
}

