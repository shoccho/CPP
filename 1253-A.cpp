#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
#define F first
#define S second
#define PB push_back
#define MP make_pair

//reverse sort(a,a+n,greater<int>());
//std::map<std::string, int>::iterator it = mapOfWordCount.begin();
int main()
{	
    
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
#endif
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	
	scanf("%d",&k);
	while(k--){

		scanf("%d",&n);
		int a[n],b[n];
		for(i=0;i<n;i++){
			scanf("%d",a+i);
		}
		int diff[n+3];
		bool dn=false;
		for(i=0;i<n;i++){
			scanf("%d",b+i);
			diff[i+1]=b[i]-a[i];
			if(diff[i+1]<0)dn=true;
		}
		if(dn)printf("No\n");
		else {
			diff[0]=0;
			diff[n+1]=0;
			int dd=0;
			for(i=0;i<=n;i++){
				if(diff[i]!=diff[i+1]){
					dd++;
				}
			}
			if(dd<=2)printf("Yes\n");
			else printf("No\n");


		}
	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}