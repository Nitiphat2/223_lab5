#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=2,b,i,j=0,k=0;
    while(k!=n)
    {
        j=0;
        for(i=2;i<a/2;i++)
        {
            if(a%i==0)
            {
                j=1;
                break;
            }
        }
    }

}
