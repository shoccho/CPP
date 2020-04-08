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
		cin>>n;
		int ar,ap,as;
		int br=0,bp=0,bs=0;
		scanf("%d%d%d",&ar,&ap,&as);
		int arc=ar;
		int apc=ap;
		int asc=as;
		char xx[n+1];
		scanf("%s",xx);
		for(i=0;i<n;i++){
			if(xx[i]=='R')br++;
			else if(xx[i]=='S')bs++;
			else bp++;
		}		
		int ww=min(bp,as)+min(bs,ar)+min(br,ap);
		if(2*ww<n)printf("NO\n");
		else {
			printf("YES\n");
			char ss[n+1];
			for(i=0;i<n;i++){
				if(xx[i]=='P' && as){
					ss[i]='S';
					as--;
				}
				else if(xx[i]=='S' && ar){
					ss[i]='R';
					ar--;
				}
				else if(xx[i]=='R' && ap){
					ss[i]='P';
					ap--;
				}
				else ss[i]='_';
			}
			for(i=0;i<n;i++){
				if(ss[i]=='_'){
					if(ar){
						ss[i]='R';
						ar--;
					}
					else if(ap){
						ss[i]='P';
						ap--;
					}
					else if(as){
						ss[i]='S';
						as--;
					}
				}
				printf("%c",ss[i]);
			}
			printf("\n");
		}
	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}