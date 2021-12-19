/*
    ASSIGNMENT NAME: Implement Binary Search Algorithms.
*/

#include<stdio.h>
int main()
{
    int i, first, last, middle, n, search, array[100];
    printf("Enter number of elements : ");
    scanf("%d",&n);
    printf("Enter %d integers : ", n);
    for (i = 0; i < n; i++)
    scanf("%d",&array[i]);
    printf("Please Enter the value that you find : ");
    scanf("%d", &search);
    first = 0;
    last = n - 1;
    middle = (first+last)/2;
    while (first <= last)
    {
        if (array[middle] < search)
            first = middle + 1;
        else if (array[middle] == search)
        {
            printf("%d is present at this list and index is %d.", search, middle+1);
            break;
        }
        else
            last = middle - 1;
        middle = (first + last)/2;
    }
    if (first > last)
        printf("%d is not present in this list.", search);
    return 0;
}


/*NAME: MD. ARIF JAHAN
ROLL: 201-15-13890
SECTION: EVE(A)
*/
