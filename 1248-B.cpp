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
	
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	sort(a,a+i);
	ll x=0,y=0;
	bool f=false;
	if(n%2==1){
		n--;
		f=true;

	}
	for(i=0;i<n/2;i++){
		x+=a[i];
		//cout<<"adding x "<<a[i]<<endl;
		y+=a[(n-i)-1];
		//cout<<"adding y "<<a[(n-i)-1]<<endl;
	}
	if(f)y+=a[n];
	ll ans=x*x+y*y;
	cout<<ans<<endl;
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}