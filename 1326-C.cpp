#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
int main()
{	
	

	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d %d",&n,&m);
	int a[n];
	for(i=0;i<n;i++)scanf("%d",a+i);
	sort(a,a+i);
	ll ans=0;
	ll ans2=1;
	for (int i = n-1; i >=m-1; i--)
	{
		ans+=a[i];
	}
	for(i=n-1;i>=m-(n-1);i--){
		ans2*=i;
		ans2%=998244353;
	}
	printf("%lld %lld\n",ans,ans2 );
	return 0;
}