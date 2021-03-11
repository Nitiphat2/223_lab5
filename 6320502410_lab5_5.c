#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int num[n][n],sum[(n-1)*(n-1)];
    int i,j,k;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",num[i][j]);
        }
    }

}
