#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=0,j,k,a,b;
    if(n%2==0)
    {
        a=n/2;
        b=i;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n/2; j++)
            {
                if(i<a)
                {
                    if(j!=a-i-1)
                    {
                        printf("_");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                else
                {
                    if(j!=b)
                    {
                        printf("_");
                    }
                    else
                    {
                        printf("*");
                    }
                }
            }
            for(j=0; j<n/2; j++)
            {
                if(j<a)
                {
                    if(j!=i)
                    {
                        printf("_");
                    }
                    else
                    {
                        printf("*");
                    }
                }
                else
                {
                    if(j!=a-b-1)
                    {
                        printf("_");
                    }
                    else
                    {
                        printf("*");
                    }
                }
            }
            if(i>=3)
            {
                b++;
            }
            printf("\n");
        }
    }
    else
    {

    }
}
