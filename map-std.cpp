#include<iostream>
#include<map>
using namespace std;

int main(){

    int n,x,mark;
    cin>>n;
    map<int, string> m;
    string s;
    for(int i=0; i<n; i++){
        cin>>x>>s;
        if (x==1){
            cin>>mark;
            m[s] += mark;
        }
        else if(x==2){
            s.erase(s);
        }
        else{
            cout<<m[s]<<endl;
        }
    }



return 0;
}
