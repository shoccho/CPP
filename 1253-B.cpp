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
	
	scanf("%d",&n);
	int a[n];

	int off=0;
	bool rf=false;
	
	std::vector<int> v,curr;
	map<int,int>state;
	for(i=0;i<n;i++){
		scanf("%d",a+i);
		int ei=abs(a[i]);
		curr.PB(ei);
		if(a[i]>0){
			if(state[ei]!=0){
				rf=true;
				break;
			}
			state[ei]=1;	
			off++;
		}
		else{
			if(state[ei]!=1){
				rf=true;
				break;
			}
			state[ei]=2;
			off--;
		}
		if(off==0){
			v.PB(curr.size());
			for(auto xx:curr )state[xx]=0;
			curr.clear();
		}	
	}
	if(! curr.empty()){
		rf=true;
	}
	if(rf==false){
		int lll=v.size();
		printf("%d\n",lll );

		for(i=0;i<lll;i++){
			if(i)printf(" ");
			printf("%d",v[i]);
		}
	}
	else printf("-1\n");

#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}