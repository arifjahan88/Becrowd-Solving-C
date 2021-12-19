#include<bits/stdc++.h>
using namespace std;

int main(){
    double i,j,a=0,b=1;
    for(i=0; i<11; i++){
            for(j=0; j<3; j++){
            cout<<"I="<<a<<" "<<"J="<<b<<endl;
            b += 1;
            }
            a += 0.2;
            b += -2.8;
    }
}
