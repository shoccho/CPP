#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
bool prime[99999999];
int i,p;
int n=99999999;
void Sieve()
{
    // memset(prime, true, sizeof(prime));
    for ( p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for ( i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
}
int main()
{	
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
	Sieve();
	int j,l,m;
	scanf("%d",&l);
	for(i=1;i<=l;i++){
		scanf("%d",&m);
		p=0;
		if(prime[m]==true) {printf("Case %d: Impossible\n",i); continue;}
			for(j=1;j<m/2;j++){

				if(m%j==0){
					if(j%2==0 && (m/j)%2==1){printf("Case %d: %d %d\n",i,j,m/j);p=1; break;}
					else if(j%2==1 && (m/j)%2==0){printf("Case %d: %d %d\n",i,j,m/j);p=1; break;}
				}
			}
		if(!p)printf("Case %d: Impossible\n",i);
	}
	return 0;
}