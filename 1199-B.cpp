#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 

int main()
{	
	
			
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);
	ll int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%lld %lld",&m,&n);
	double ans=n*n-m*m;
	ans/=(2*m);
	printf("%lf\n",ans);

	return 0;
}