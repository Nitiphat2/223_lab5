#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100];
    scanf("%s%s%s",a,b,c);
    int base=2,j=1,k,i,s1,s2,s3,a1,b1,c1,x;
    while(j!=0)
    {
        s1=0;
        s2=0;
        s3=0;
        a1=strlen(a);
        for(i=0;i<strlen(a);i++)
        {
            x=a1-i-1;
            switch(x)
                {
                    case 0 : s1 = s1+((int)a[i] - 48); break;
                    case 1 : s1 = s1+((int)a[i] - 48) * base; break;
                    case 2 : s1 = s1+((int)a[i] - 48) * base*base; break;
                    case 3 : s1 = s1+((int)a[i] - 48) * base*base*base; break;
                    case 4 : s1 = s1+((int)a[i] - 48) * base*base*base*base; break;
                    case 5 : s1 = s1+((int)a[i] - 48) * base*base*base*base*base; break;
                    case 6 : s1 = s1+((int)a[i] - 48) * base*base*base*base*base*base; break;
                    case 7 : s1 = s1+((int)a[i] - 48) * base*base*base*base*base*base*base; break;
                    case 8 : s1 = s1+((int)a[i] - 48) * base*base*base*base*base*base*base*base; break;
                    case 9 : s1 = s1+((int)a[i] - 48) * base*base*base*base*base*base*base*base*base; break;
                }
        }
        b1=strlen(b);
        for(i=0;i<strlen(b);i++)
        {
            x=b1-i-1;
            switch(x)
                {
                    case 0 : s2 = s2+((int)b[i] - 48); break;
                    case 1 : s2 = s2+((int)b[i] - 48) * base; break;
                    case 2 : s2 = s2+((int)b[i] - 48) * base*base; break;
                    case 3 : s2 = s2+((int)b[i] - 48) * base*base*base; break;
                    case 4 : s2 = s2+((int)b[i] - 48) * base*base*base*base; break;
                    case 5 : s2 = s2+((int)b[i] - 48) * base*base*base*base*base; break;
                    case 6 : s2 = s2+((int)b[i] - 48) * base*base*base*base*base*base; break;
                    case 7 : s2 = s2+((int)b[i] - 48) * base*base*base*base*base*base*base; break;
                    case 8 : s2 = s2+((int)b[i] - 48) * base*base*base*base*base*base*base*base; break;
                    case 9 : s2 = s2+((int)b[i] - 48) * base*base*base*base*base*base*base*base*base; break;
                }
        }
        c1=strlen(c);
        for(i=0;i<strlen(c);i++)
        {
            x=c1-i-1;
            switch(x)
                {
                    case 0 : s3 = s3+((int)c[i] - 48); break;
                    case 1 : s3 = s3+((int)c[i] - 48) * base; break;
                    case 2 : s3 = s3+((int)c[i] - 48) * base*base; break;
                    case 3 : s3 = s3+((int)c[i] - 48) * base*base*base; break;
                    case 4 : s3 = s3+((int)c[i] - 48) * base*base*base*base; break;
                    case 5 : s3 = s3+((int)c[i] - 48) * base*base*base*base*base; break;
                    case 6 : s3 = s3+((int)c[i] - 48) * base*base*base*base*base*base; break;
                    case 7 : s3 = s3+((int)c[i] - 48) * base*base*base*base*base*base*base; break;
                    case 8 : s3 = s3+((int)c[i] - 48) * base*base*base*base*base*base*base*base; break;
                    case 9 : s3 = s3+((int)c[i] - 48) * base*base*base*base*base*base*base*base*base; break;
                }
        }
        if(s1+s2==s3)
        {
            printf("%d",base);
            j=0;
        }
        else
        {
            base++;
        }
    }

}
