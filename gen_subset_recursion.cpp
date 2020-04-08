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
int n;
vi v;
void gen(int k){
	if(k==n){
		for(auto i : v)
		printf("%d ",i );
	printf("\n");
	}
	else {
		gen(k+1);
		v.push_back(k);
		gen(k+1);
		v.pop_back();
	}
}
int main()
{	
    
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
#endif
	int i,j,k,l,m,o,p,q=0;
	char x[100000],y[1000000];
	
	scanf("%d",&n);

	// gen(0);
	for(i=0;i<(1<<n);i++){
		vi set;
		for(j=0;j<n;j++){
			if(i&(1<<j))printf("%d ", j);
		}
		printf("\n");
	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}