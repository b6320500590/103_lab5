#include<stdio.h>

int main()
{
    int n, i, j;

    scanf("%d", &n);

    if(n%2==1)
        n=n+1;

    for(i=0; i<n-2; i++)
    {
        for(j=n-3-i; j>0; j--) printf("_");
        for(j=n-3-i; j>0; j--) printf("*");
        for(j=n-3-i; j>0; j--) printf("_");
        printf("\n");
    }


    return 0;
}
