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
//std::map<std::string, int>::iterator it = mapOfWordCount.begin();
int main()
{	
	
	
	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&q);
	while(q--){
		scanf("%d %d %d",&n,&m,&k);
		int a[n];
		bool poss=true;
		for(i=0;i<n;i++){
			scanf("%d",a+i);
		}
		for(i=0;i<n-1;i++){
			m+=a[i]-max(0,a[i+1]-k);
			if(m<0){
				poss=false;
				break;
			}
		}
		if(poss)printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}