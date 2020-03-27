#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)
ll sums(ll j){
	ll x=0;
	while(j){
		x+=j%10;
		j/=10;
	}
	return x;
}
int main()
{	
	FastIO;
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	ll i,j,k,l,m,n,o,p;
	char x[100000],y[1000000];
	
	while(1){
		scanf("%lld",&j);
		if(j==0)break;
		else {
			while(j>=10){
				j=sums(j);
			}
		}
		printf("%lld\n",j);
	}

	return 0;
}