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

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&n);
	ll a[n];
	ll total=0;
	ll min=99999999999;
	for(i=0;i<n;i++){
		scanf("%lld",&a[i]);
		total+=a[i];
		if (a[i]<min && a[i]%2!=0)min=a[i];
		
	}
	if(total%2==0){
		printf("%lld\n",total );

	}
	else printf("%lld\n",total-min );

	return 0;
}