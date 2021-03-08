#include<stdio.h>

int main()
{
    int n, i, j, k, m;

    scanf("%d", &n);

    m=n;

    if(n%2==1)
        m=n+1;

    k=m/2+1;

    if(n==1)
        printf("*");
    else if(n==2)
        printf("*\n*");

    for(i=0; i<m/2; i++)
    {
        for(j=m-k-i; j>0; j--) printf("_");

        printf("*");

        if(i>=1)
        {
            for(j=0;j<i;j++) printf("_");
            for(j=1;j<i;j++) printf("_");
            printf("*");
        }

        for(j=m-k-i; j>0; j--) printf("_");

        printf("\n");
    }

    if(n%2==1)
    {
        for(i=1; i<m/2; i++)
        {
            for(j=0; j<i; j++) printf("_");
            printf("*");

            if(i>=1)
            {
                for(j=m/2;j>i+1;j--) printf("_");
                for(j=m/2;j>i+2;j--) printf("_");
                if(i!=m/2-1)
                    printf("*");
            }
            for(j=0; j<i; j++) printf("_");
            printf("\n");
        }
    }
    else if(n%2==0)
    {


        for(i=0; i<m/2; i++)
        {
            for(j=0; j<i; j++) printf("_");
            printf("*");

            if(i>=1)
            {
                for(j=m/2;j>i+1;j--) printf("_");
                for(j=m/2;j>i+2;j--) printf("_");
                if(i!=m/2-1)
                    printf("*");
            }
            for(j=0; j<i; j++) printf("_");
            printf("\n");
        }
    }

    return 0;
}
