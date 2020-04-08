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
int ad[100010],col[100010];
vi g[100010];
int main()
{	
    
#ifndef ONLINE_JUDGE
	clock_t tStart = clock();
	freopen("i.txt", "r", stdin);
	freopen("o.txt", "w", stdout);
#endif
	int i,j,k,l,m,n,o,p,q=0;
	
	cin>>n>>m;
	for(i=0;i<n;i++)cin>>col[i];
	for(i=0;i<m;i++){
		int a,b;
		cin>>a>>b;
		a--;
		b--;
		g[a].PB(b);
		g[b].PB(a);
	}


	for(i=0;i<n;i++){
		int x=g[i].size();
		int c =col[i];
		set<int>st;
		for(j=0;j<x;j++){
			if(c!=col[g[i][j]])
				st.insert(col[g[i][j]]);
		}
		ad[i]=st.size();
	}
	int res=*max_element(ad,ad+n);
	int ans =1e9;
	for(i=0;i<n;i++){
		if(ad[i]==res){
			ans=min(ans,col[i]);
		}
	}
	cout<<ans;
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}