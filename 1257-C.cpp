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
		 map<int ,int>oc;
		int a[n];
		int max_count=0;
		for(i=0;i<n;i++){
			scanf("%d",a+i);
			oc[a[i]]++;
			max_count=max(max_count,oc[a[i]]);
		}
		int ff=0;
		int maxi=0;
		for(auto cc:oc){
			if(cc.S==max_count){
				ff++;
				maxi=cc.F;
			}
			if(ff>1)break;
		}
		
		if(ff>1 ||n<2 )printf("-1\n");
		else {
			int lastpos=-1;
			int mind=n;
			for(i=0;i<n;i++){
				if(a[i]==maxi){
					if(lastpos==-1){
						lastpos=i;
		

					}
					else {
						mind=min(i-lastpos,mind);
						lastpos=i;
					}
				}
			}
			printf("%d\n",mind +1);
		}
	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}