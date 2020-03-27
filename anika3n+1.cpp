#include<stdio.h>
int main()
{
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);
    int a,b,aa,n,max,c,k=0,temp;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        k=0;
        if(a>b)
        {
            temp =a;
            a=b;
            b=temp;
            k=1;
        }
        aa=a, max =0;

        while(aa<=b)
        {
            c=1, n=aa;
            while(n>1)
            {
                if(n%2!=0)
                {
                    n= (3*n)+1;
                    n =n/2;
                    c+=2;
                }
                else
                {
                    n =n/2;
                    c++;
                }
            }
            if(max<c)
            {
                max = c;
            }
            aa++;
        }
        if(k==1)
        {
            temp =a;
            a=b;
            b=temp;
        }
        printf("%d %d %d\n",a,b,max);

    }
}