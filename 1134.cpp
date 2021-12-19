#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,alc=0,gas=0,dis=0;
    while(1)
    {
        cin>>n;
        if(n == 4){
            break;
        }
        else{
            if(n == 1){
                alc++;
            }
            else if(n == 2){
                gas = gas + 1;
            }
            else if(n == 3){
                dis = dis + 1;
            }
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<alc<<endl;
    cout<<"Gasolina: "<<gas<<endl;
    cout<<"Diesel: "<<dis<<endl;
}
