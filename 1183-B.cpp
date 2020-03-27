#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 

int main()
{	
	
			
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&l);
	while(l--){
		scanf("%d %d",&n,&k);
		int a[n];
		q=0;
		for(i=0;i<n;i++){
			scanf("%d",a+i);
		
		}	
		sort(a,a+i);
		if(a[0]+k>=a[i-1]-k)printf("%d\n", a[0]+k);
		else printf("-1\n");
	}
	return 0;
}