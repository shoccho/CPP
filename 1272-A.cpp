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
	ll  i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%lld",&k);
	while(k--){
		scanf("%lld %lld %lld",&m,&n,&o);
		p=m;
		q=n;
		 ll r=o;
		double avg=m+n+o;
		avg/=3;
		if(m<avg)m++;
		else if(m>avg)m--;
		if(n<avg)n++;
		else if(n>avg)n--;
		if(o<avg)o++;
		else if(o>avg)o--;
	 	ll mini=abs(m-n)+abs(m-o)+abs(n-o) ;
	 	ll av=p+q+r;
	 	av/=3;
	 	if(p<av)p++;
	 	else if(p>av)p--;

	 	if(q<av)q++;
	 	else if(q>av)q--;

	 	if(r<av)r++;
	 	else if(r>av)r--;

	 	ll minf=abs(p-q)+abs(p-r)+abs(q-r) ;
		printf("%lld\n",min(minf,mini));
	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}