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

void gen(std::vector<int> p,std::vector<int> v,bool s[], int n){
	if(p.size()==n){
		for(auto i:p){
			cout<<i<<" ";

		}
		cout<<"\n";
	}
	else {
		for(int i=0;i<n;i++){
			if(s[i]==true) continue;
			s[i]=true;
			p.PB(v[i]);
			gen(p,v,s,n);
			s[i]=false;
			p.pop_back();
		}
	}
}
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
	bool choosen[n];
	vi s;
	for(i=0;i<n;i++){
		choosen[i]=false;
		scanf("%d",&q);
		s.PB(q);
	}
	vi per;
	gen(per,s,choosen,n);
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}