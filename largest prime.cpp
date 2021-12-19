#include<stdio.h>
#include<iostream>
#include<math.h>
#include<string.h>
#include<stdlib.h>
using namespace std;
#define N 10000000
#define LLU unsigned int

bool status[N];
void sieve()
{
    LLU i, j, sqrtN;
    sqrtN = sqrt(N);
    status[1] = false;
    for(i=2; i<=N; i++) status[i]=true;
    for(i=2; i<=N; i++)
    if(status[i]==true)
    for(j=2*i; j<=N; j+=i)
    status[j] = false;
}

int main()
{
    LLU i, j;
    sieve();
    //for(i=1000000; i<1000050; i++) if(status[i]==true) cout << i << " ";
    char a[256];
    int b[256], temp, m, n, MAX[256];
    while(scanf("%s", a)!=EOF)
    {
		if(strcmp("0",a)==0)	return 0;
        int len = strlen(a);
        for(i=0; i<len; i++) b[i] = a[i] - '0';
        int max = 0;
        for(i=0; i<len; i++)
        {
            int k = 0;
            m = 0;
            for(j=i; j<len; j++)
            {
                m=m*10+b[j];
				if(m>100000) break;
                if(status[m]==true)
                    if(m>max)   max=m;
            }
        }
        cout << max << endl;
    }
    return 0;
}
