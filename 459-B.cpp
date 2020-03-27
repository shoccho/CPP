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
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);

ll	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%lld",&n);
ll	int a[n];
ll	int max=0;
ll	int min=maxint;
	for(i=0;i<n;i++){
		scanf("%lld",a+i);
		if(a[i]>max)max=a[i];
		if(a[i]<min)min=a[i];
	}
	
	ll int res=0;
	ll int diff=max-min;
	i=0;

		for(j=n-1;j>=0;j--){
			 
			if(a[j]==max){
				i++;
				
			}
			 if(a[j]==min)res++;
		}
	printf("%lld ", max-min);
	if(i==n)cout<<n*(n-1)/2<<endl;
	else cout<<res*i<<endl;
	return 0;
}