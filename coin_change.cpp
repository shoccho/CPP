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
vi ans(10000,-1);
vi s;
int solve(int x){
	
	if(x<0)return maxint;
	if(x==0) return 0;
	if(ans[x]!=-1)return ans[x];
	
	int best=maxint;
	 {
		for(auto i :s){
			best=min(best,solve(x-i)+1);
		}
	}
	ans[x]=best;
	return best;
}
int main()
{	
    
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("i.txt", "r", stdin);
	//freopen("o.txt", "w", stdout);
#endif
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	//num of coins
	scanf("%d ",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&q);
		//coins
		s.emplace(s.end(),q);	
	}
	
	//amount
	scanf("%d",&m);
	//recursive
	//cout<<solve(m);


	//iterative
int coins[m+1];
	ans[0]=0;
	for(i=1;i<=m;i++){
		ans[i]=maxint;
		for(auto c : s){
			if(i-c>=0 && ans[i-c]+1 < ans[i]){
				ans[i]=(ans[i-c]+1);
				coins[i]=c;
			}
		}
	}
	printf("%d\n",ans[m]);
	while(m){
		cout<<coins[m]<<" ";
		m-=coins[m];
	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}
