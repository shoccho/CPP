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
	

	scanf("%d",&k);
	while(k--){
		char x[100000],y[1000000];
		cin>>x;
		cin>>y;
		l=strlen(x);
		//sort(x,x+l);
		int l2=strlen(y);
		bool ff=false;
		if(l>l2){
			printf("No\n");
			continue;
		}
		for(i=0;i<=l2-l;i++){
			int pa=0;
			map<char,int>xx;
			for(j=i;j<i+l;j++){
				xx[y[j]]++;
			}
			for(j=0;j<l;j++){

				xx[x[j]]--;
			}
			ff=true;
			for(auto cc: xx){
				if(cc.S>=1)ff=false;
			}
			if(ff)break;
		}
		if(ff)printf("Yes\n");
		else printf("No\n");
	}
	#ifndef ONLINE_JUDGE
    	printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
	#endif
	return 0;
}