#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long


int main()
{   
    
        
    freopen("i.txt","r",stdin);
    freopen("o.txt","w",stdout);

    int i,j,k,l,m,n,p,q=0;
    char x[100000],y[1000000];
    int b,a,o,aa,c,c1;

    while(scanf("%d",&a)!= EOF)
    {

        o = a ,c=0,  c1=0;
        int reverse =0;

        for(i = 2; i <= a/2; i++)
        {
            if(a%i == 0)
            {
                c = 1;
                break;
            }
        }
        while (a != 0)
        {
            reverse = reverse * 10;
            reverse = reverse + a%10;
            a = a/10;
        }
        for(j = 2; j <= reverse/2; j++)
        {
            if(reverse%j == 0)
            {
                c1 = 1;
                break;
            }
        }
        if(c==1 || o==1)
        {
            printf("%d is not prime.\n",o);
        }
        else if(c1==0 && o!=1)
        {
            printf("%d is emirp.\n",o);
        }
        else if(c==0 && c1==1 && o!=1)
        {
            printf("%d is prime.\n",o);
        }



    }


}