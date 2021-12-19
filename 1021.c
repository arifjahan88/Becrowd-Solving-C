#include<stdio.h>
int main()
{

    double n;
    int i;
    int arr1[7] = {100, 50, 20, 10, 5, 2, 1};
    int arr_note[7];
    int arr2[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    int arr2_coin[6];

    scanf("%lf", &n);

    int x = n;
    for(i=0; i<7; i++){
        arr_note[i] = x / arr1[i];
        x = x%arr1[i];
    }
    n = n * 100;
    x = x % 100;
    for(i=0; i<6; i++){
        arr2_coin[i] = x / arr2[i];
        x = x%arr2[i];
    }
    printf("NOTAS:\n");
    for (i=0; i<6; i++){
        printf("%d nota(s) de R$ %d.00\n", arr_note[i], arr1[i]);
    }
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ %.2f\n", arr_note[6], (float)arr1[6]);
    for(i=0; i<5; i++){
        printf("%d moeda(s) de R$ %.2f\n", arr2_coin[i], (float)arr2[i]);
    }

    return 0;
}
