#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long


int main()
{	
	
		
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);

	ll int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	cin>>n;
	while(n--){
		cin>>m;
		q=m*(m+1)/2;
		p=1;
		while(p<=m){
			q-=p*2;
			p*=2;
		}
		printf("%lld\n",q );
	}

	return 0;
}