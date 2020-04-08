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
bool isb(ll a){
	unordered_multiset<int>d;
	while(a){
		
		int dd=a%10;
		if(d.count(dd)!=d.size() ){
			return false;
		}
		d.insert(dd);
		a/=10;
	}
	return true;
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
	scanf("%d",&k);
	while(k--){
		cin >> n;
		int b = 0, ans = 0;
		for (int len = 1; len <= 9; len++) {
   			b = b * 10 + 1;            
    		for (int m = 1; m <= 9; m++)
        	if (b * m <= n)
        	    ans++;
		}
		cout << ans << endl;
	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}