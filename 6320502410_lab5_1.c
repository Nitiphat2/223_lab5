#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,l,a=0,x;
    scanf("%d",&n);
    char num[n];
    int f[n];
    for(i=0; i<n; i++)
    {
        f[a]=0;
        scanf(" %s",num);
        if(!(strcmp(num,"+")))
        {
            f[a-2]=f[a-2]+f[a-1];
            a--;
        }
        else if(!(strcmp(num,"-")))
        {
            f[a-2]=f[a-2]-f[a-1];
            a--;
        }
        else if(!(strcmp(num,"*")))
        {
            f[a-2]=f[a-2]*f[a-1];
            a--;
        }
        else
        {
            j=strlen(num);
            for(l=0;l<j;l++)
            {
                x=j-l-1;
                switch(x)
                {
                    case 0 : f[a] = f[a]+((int)num[l] - 48); break;
                    case 1 : f[a] = f[a]+((int)num[l] - 48) * 10; break;
                    case 2 : f[a] = f[a]+((int)num[l] - 48) * 100; break;
                    case 3 : f[a] = f[a]+((int)num[l] - 48) * 1000; break;
                    case 4 : f[a] = f[a]+((int)num[l] - 48) * 10000; break;
                    case 5 : f[a] = f[a]+((int)num[l] - 48) * 100000; break;
                    case 6 : f[a] = f[a]+((int)num[l] - 48) * 1000000; break;
                    case 7 : f[a] = f[a]+((int)num[l] - 48) * 10000000; break;
                    case 8 : f[a] = f[a]+((int)num[l] - 48) * 100000000; break;
                    case 9 : f[a] = f[a]+((int)num[l] - 48) * 1000000000; break;
                }
            }
            a++;
        }
    }
    printf("%d",f[a-1]);
    return 0;
}
