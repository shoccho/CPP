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

	for(i=0;i<n;i++){
		scanf("%d",&p);
		if(i){
			a[i]=a[i-1]+p;
		}
		else a[i]=p;
	}
	scanf("%d",&k);
	while(k--){
		scanf("%d",&l);
		int hi=n-1;
		int lo=0;
		int res=0;
		int mid;
		while(hi>=lo){
			mid=(hi+lo)/2;
	 		if(a[mid]>=l)hi=mid-1;
			else {
				lo=mid+1;
				res=lo;
			}
		}
		printf("%d\n",res+1);
	}
	return 0;
}


