#include<iostream>
using namespace std;

int main()
{
  int n, a=0;
  cin>>n;
  for(int i=0; i<n; i++){
    if(i%2==0){
            a++;
            a = a+1;
        printf("%d^2 = %d\n", a, a*a);
    }
  }

    return 0;
}

