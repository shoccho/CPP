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

	ll int i,j,k,l,m,n,o,p,q=0,a,b,s;
	char x[100000],y[1000000];
	scanf("%lld",&j);
	while(j--){
		scanf("%lld %lld %lld %lld",&a,&b,&n,&s);
		if(s>(a*n)+b)printf("NO\n");

		else {
			if(b<s%n)printf("NO\n");
			else printf("YES\n");
		}
	}
	return 0;
}