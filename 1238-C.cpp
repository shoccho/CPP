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
	int r;
	scanf("%d",&k);
	while(k--){
		scanf("%d%d",&n,&r);
		int a[n];
		map<int,int>field;
		int uq=0;
		for(i=0;i<n;i++){
			scanf("%d",a+i);
			
			if(field[a[i]]!=1){
				field[a[i]]=1;
				uq++;
			}
		}
		sort(a,a+i);
		int s=0;
		for(i=uq-1;i>=0;i--){
			if(a[i]-s*r>0)s++;

		}
		printf("%d\n",s );
	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}