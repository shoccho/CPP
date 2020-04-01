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
int dist( int a,int b){
	int mn=min(a,b);
	int mx=max(a,b);
	return abs(mx-mn);
}

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
	//char x[100000],y[1000000];
	

	scanf("%d",&k);
	int aa,bb,cc,dd;
	int x,y,x1,x2,y1,y2;
	while(k--){
		scanf("%d %d %d %d",&aa,&bb,&cc,&dd);
		int hori=abs(aa-bb);
		int ver=abs(cc-dd);
		scanf("%d %d %d %d %d %d",&x,&y,&x1,&y1,&x2,&y2);
		if(hori<=abs(x1-x2)  && ver <=abs(y1-y2) ){
			if(aa!=0 && bb!=0 && dist(x1,x2)<1)printf("NO\n");
			else if(dd!=0 && cc!=0 && dist(y1,y2)<1)printf("NO\n");
			else printf("YES\n");
		}
		else printf("NO\n");
	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}