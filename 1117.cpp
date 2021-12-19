#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=0;
    double a, sum=0;

    while (n != 2){
        cin>>a>>setprecision(1);
        if (a >= 0 && a <= 10){
            n++;
            sum = sum + a;
        }
        else{
            cout<<"nota invalida"<<endl;
        }
    }
    sum = sum / 2;
    cout<<"media = "<< sum <<setprecision(2)<<endl;
}
