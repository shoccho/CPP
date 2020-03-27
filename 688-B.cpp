#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long

ll reverse(ll a){

	ll b=0;
	while(a){
		b*=10;
		b+=a%10;
		
		a/=10;
	}
	return b;
}
int main()
{	
	
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	ll z;
	z=100;
	printf("%lld",z);
	printf("%lld\n",reverse(z));
	return 0;
}