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

	ll  i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%lld",&k);
	ll res=0;
	vi rev;
	ll  revc=0;
	ll countz=0;
	for(i=0;i<k;i++){
		scanf("%lld",&q);
		if(q<0){
			res+=abs(1-q);
			revc++;
			if( revc%2==0){
				res-=4;
			}
		}
		else if(q==0){
			countz++;
		}
		else {
			res+=abs(q-1);
		}
	}
	if(revc%2==1 && countz){
		countz--;
		res-=1;
	}
	res+=countz;
	printf("%lld\n",res );
	return 0;
}