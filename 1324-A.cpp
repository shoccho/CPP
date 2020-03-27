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
	
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&n);
	
	while(n--){
		scanf("%d",&m);
		int a[m];
		int max=0;
		int count=0;
		for(i=0;i<m;i++){
			scanf("%d",a+i);
			if(a[i]>max)max=a[i];
		}
		for(i=0;i<m;i++){
			if((max-a[i])%2==0)continue;
			else count++;
		}
		if(count%m==0)printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}