#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=1,b=1,i,j=0,k=0,l,z[]= {2,3,5},x,m,o;
    while(k!=n)
    {
        j=0;
        m=0;
        o=0;
        for(i=2; i<=a; i++)
        {
            if(a%i==0&&i>5)
            {
                x=0;
                o=0;
                for(l=2; l<=i; l++)
                {
                    if(i%l==0&&l!=i)
                    {
                        o++;
                    }
                    if(l==i&&o==0)
                    {
                        x=1;
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
        a++;
    }
    printf("%d",b);
}
