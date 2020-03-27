#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n


int main()
{	

	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);
	
	
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d %d %d",&m,&n,&o);
	//---------------n--l--r
	ll sum= powof2(n);
	sum-=1;
	sum+=(m-n);
	ll max=powof2(o);
	max-=1;
	max+=((m-o)*powof2(o-1));
	printf("%lld %lld\n", sum,max);

	return 0;
}