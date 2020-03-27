#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
//reverse sort(a,a+n,greater<int>());
int main()
{	
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);

	ll int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	
	scanf("%lld %lld",&n,&m);
	ll int a[n],b[n];
	for(i=0;i<n;i++){
		scanf("%lld",a+i);
		if(i){
			b[i-1]=a[i-1]-a[i];
		}
	}
	sort(b,b+i-1);
	ll int ans=a[n-1]-a[0];
	for(i=0;i<m-1;i++){

		ans+=b[i];
	}

	printf("%lld\n",ans);
	return 0;
}