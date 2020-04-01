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
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&k);
	while(k--){
		scanf("%d %d %d",&m,&n,&o);
		int np,op;
		scanf("%d %d",&np,&op);
		m/=2;
		ll ans=0;
		if(np>op){
			while(m && n ){
				ans+=np;
				m--;
				n--;
			}
			while(m>0 && o ){
				ans+=op;
				m--;
				o--;
			}
		}
		else {
			while(m && o ){
				ans+=op;
				m--;
				o--;
			}
			while(m>0 && n ){
				ans+=np;
				m--;
				n--;
			}
		}
		printf("%lld\n", ans);
	}
	
	return 0;
}