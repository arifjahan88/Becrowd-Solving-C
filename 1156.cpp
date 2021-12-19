#include<bits/stdc++.h>
using namespace std;
int main(){
    double n, sum = 1, cnt = 1, s = 1;
    for(int i = 1; i <= 39; i++){
        sum = sum + 2;
        cnt = cnt * 2;
        s = s + sum/cnt;
    }
    printf("%.2lf\n", s);
}
