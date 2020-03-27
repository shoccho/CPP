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

    int j,k,l,n,o,p,q=0;
  

    int m,a,b,x,min,i,v;
    scanf("%d",&m);
    while(m--)
    {
        min =9999;
        scanf("%d%d",&a,&b);
        int am[a];
        for(i=0; i<a; i++)
        {
            scanf("%d",&am[i]);

            if(am[i]>=b )
            {
                if(am[i]==m)
                {
                    v=i+1;
                    break;
                }
                x = am[i] - b;
                if(min>x)
                {
                    min =x;
                    v = i+1;
                }
            }
        }
        printf("%d\n",v);
    }
}