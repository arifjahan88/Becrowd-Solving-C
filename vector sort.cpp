#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;

    int size = v.size();
    int x,i,n;
    cin>>x;
    for(i=1; i<=x; i++){
        cin>>n;
        v.push_back(n);

    }
    std::sort(v.begin(),v.end());

    for(auto i=v.begin(); i<v.end(); i++)
    {

        cout<<*i<<" ";


    }
    return 0;
}
