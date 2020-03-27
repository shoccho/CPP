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
	
			
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&p);
	while(p--){
		scanf("%d %d",&n,&k);
		ll a[n];
		bool fa=true;
		int oc=0;
		map<ll,ll>ma;
		for(i=0;i<n;i++){
			scanf("%lld",a+i);
			if(a[i]==0)continue;
			else if(a[i]%k==0){
				if(ma[log(a[i]/log(k))]==1){
					fa=false;
					
				}
				ma[log(a[i]/log(k))]=1;
			}
			else if(a[i]%k==1 && ma[0]!=1 && a[i]>k)continue;
			else if(a[i]==1 && ma[0]!=1){
				ma[0]=1;
				continue;
			}
			else fa=false;
 
		}
		if(fa)printf("YES\n");
		else printf("NO\n");
 
	}
	
	return 0;
}