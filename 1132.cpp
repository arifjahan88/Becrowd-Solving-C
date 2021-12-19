#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,temp = 0,tmp;
    cin>>x>>y;
    if (x < y){
        for (int i = x; i < y+1; i++){
            if (i%13 != 0){
                temp = temp + i;
            }
        }
        cout<<temp<<endl;
    }
    else if (x > y){
        tmp = y;
        y = x;
        x = tmp;
        for (int i = x; i < y+1; i++){
            if (i%13 != 0){
                temp = temp + i;
            }
        }
        cout<<temp<<endl;
    }
}
