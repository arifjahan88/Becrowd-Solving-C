#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y,tmp = 0,result,temp;
    cin>>x>>y;
    if (x < y){
        for(int i = x+1; i < y; i++){
            if(i%5 == 2 || i%5 == 3){
                cout<<i<<endl;
            }
        }
    }
    else if (x > y){
        temp = y;
        y = x;
        x = temp;
        for(int i = x+1; i < y; i++){
            if(i%5 == 2 || i%5 == 3){
                cout<<i<<endl;
            }
        }
    }
}
