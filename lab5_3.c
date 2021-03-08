#include<stdio.h>

int main()
{
    int n, i, j, t=2, b=0;

    scanf("%d", &n);

    if(n==1) b=1;
    else
    {
        for(i=1; i<n; t++)
        {
            j=t;

            while(j>1)
            {

                b=1;

                if(j%2==0) j/=2;

                else if(j%3==0) j/=3;

                else if(j%5==0) j/=5;

                else
                {
                    b=0;
                    break;
                }
            }

            if(b)
                i++;
        }
    }

    if(b)
        printf("%d", t-1);
}
