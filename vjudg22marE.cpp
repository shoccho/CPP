#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
ll ones[1000];
int main()
{	
	

	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	for(i=0;i<1000;i++)ones[i]=-1;
	scanf("%d",&k);

	ones[2]=3;

	while(k--){
		cin>>n;
		ll res=pow(2,n);
		printf("%lld",res/2);	
		if(ones[n]!=-1)printf(" %lld\n", ones[n]);
		else {
			ll ss=0;
			for(i=3;i<=res;i++){
				int pp=i;
				if(ones[pp]!=-1)
				//printf("%lld\n",ss);
				ones[i]=ss-ones[i-1]/2;
			}
			printf(" %lld\n",ones[i-1]);
		}	

	}
	
	return 0;
}