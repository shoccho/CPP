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
	int i,j,k,l,m,n,o,p,q=0,c;
	char x[100000],y[1000000];

    while(scanf("%d%d",&m,&n) && m!=0 && n!=0)
    {
        c=0;
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)

                if(a[i]==a[j])
                {
                    if(a[j]==0)
                    {
                        break;
                    }
                    else
                    c++;
                    a[j]=0;
                    break;
                }
        }
        printf("%d\n",c);
    }


	return 0;
}