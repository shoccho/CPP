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
		scanf("%d %d %d",&m,&n,&o);
		int a[m];
		for(i=0;i<m;i++){
			scanf("%d",a+i);
		}
		int min_uq=o;
		for(i=0;i+o<=m;i++){
			
			unordered_set<int>ss;
			int uq=0;
			for(j=i;j<i+o;j++){
				if(ss.count(a[j])==1)continue;
				else {
					uq++;
					ss.insert(a[j]);
				}
				
			}
			min_uq=min(uq,min_uq);
		}
		printf("%d\n",min_uq);
	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}