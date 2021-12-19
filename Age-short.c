#include<stdio.h>
int main(){

    int arr[500] = {0}, j, n, m = 0, age;


    while(scanf("%d", &n)!=EOF && n!=0)
    {

        for (int i = 1; i<=n; i++)
        {
            scanf("%d", &age);
            m++;
            arr[age] = arr[age] + 1;
        }
        m--;
        for(int i=1; i<=100; i++)
        {
            if (arr[i]>0)
            {
                for (int j=1; j<=arr[i]; j++)
                {
                    printf("%d", i);
                    while(m--)
                    {
                        printf(" ");
                        break;
                    }
                }
            }

        }
        printf("\n");
    }



return 0;
}
