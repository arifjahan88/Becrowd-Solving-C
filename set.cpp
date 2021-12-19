#include<iostream>
#include <set>
using namespace std;
int main()
{

    int n,a,b;
    cin>>n;
    set <int> s;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        if (a==1){
            s.insert(b);
        }
        else if(a==2){
            s.erase(b);
        }
        else{
            if(s.find(b)==s.end()){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }


    return 0;
}

