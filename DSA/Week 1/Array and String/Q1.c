// Hacker Rank: 1D Array in C

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d",&n);
    int *arr=  (int*)malloc(n*sizeof(int));
    if (arr==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    int sum=0;
    for ( int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("%d",sum);

    free(arr);
    return 0;
}
