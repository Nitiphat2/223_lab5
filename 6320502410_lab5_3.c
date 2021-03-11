#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1,b=1,i,j=0,k=0,l,z[3]={2,3,5},x;
    while(k!=n)
    {
        j=0;
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                x=1;
                for(l=0;l<3;l++)
                {
                    if(i==z[l])
                    {
                        x=0;
                    }
                }
                if(x==1)
                {
                    j=1;
                    break;
                }
            }
        }
        if(j==0)
        {
            k++;
            b=a;
        }
         printf("%d %d\n",a,k);
        a++;
    }
    printf("%d",b);
}
