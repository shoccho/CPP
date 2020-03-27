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

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&n);
	ll int a[n];
	ll int b[n];
	ll maxv=0;
	ll pa=0;
	for(i=0;i<n;i++){
		scanf("%lld",a+i);
		if(i==0)b[0]=a[0];
		else{
			if(maxv<=b[i-1])maxv=b[i-1];
			b[i]=a[i]+maxv;
		}
	}
	for(i=0;i<n;i++){
		if(i)printf(" ");
		printf("%lld",b[i]);
	}
	printf("\n");
	
	
	return 0;
}