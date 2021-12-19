#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,x,a,b,c,size;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cin>>a>>b>>c;
    v.erase(v.begin() + a-1);
    v.erase(v.begin() + b-1, v.begin() + c-1);

    size = v.size();
    cout<<size<<endl;
    for(int i=0; i<size; i++)
        cout<<v[i]<<" ";

    return 0;
}

