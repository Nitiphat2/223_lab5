#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int num[n][n],sum[n-1][n-1];
    int i,j,k=0,a,l;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<n-(m-1);i++)
    {
        for(j=0; j<n-(m-1); j++)
        {
            sum[i][j]=0;
            for(l=0;l<m;l++)
            {
                for(a=0;a<m;a++)
                {
                    sum[i][j]=sum[i][j]+num[i+l][j+a];
                }
            }
        }
    }
    int max=sum[0][0];
    for(i=0;i<n-(m-1);i++)
    {
        for(j=0; j<n-(m-1); j++)
        {
            if(max<sum[i][j])
            {
                max=sum[i][j];
            }
        }
    }
    printf("%d",max);
    return 0;
}
