#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
//reverse sort(a,a+n,greater<int>());
int main()
{	
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	ll ans=0;
	scanf("%d",&k);
	while(k--){
		scanf("%d %d",&m,&n);
		if(n==1){
			if(m%2==0)printf("NO\n");
			else printf("YES\n");
		}
		else if(n>(sqrt(m))){
			printf("NO\n");
		}
		else {
			if(m%2==1){
				if(n%2==1)printf("YES\n");
				else printf("NO\n");
			}
			else {
				if(n%2==0)printf("YES\n");
				else printf("NO\n");
			}
		}
		}
	
	return 0;
}