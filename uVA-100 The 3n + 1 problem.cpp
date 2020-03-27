#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
ll c=1; 
int main()
{	
	FastIO;
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	ll i,j,k,l,m,n,o,p;
	char x[100000],y[1000000];
	while(scanf("%lld %lld",&m,&n)!=EOF){
		p=0;
		c=1;
		if(m>n)swap(m,n);
		for(i=m;i<=n;i++){
			l=i;
			while(l>1)
			{
				if(l&1)l=(3*l+1);
				else l/=2;
				c++;
			}
			if(c>p)p=c;
			c=1;
		}
		printf("%lld %lld %lld\n",m,n,p);
	}

	return 0;
}