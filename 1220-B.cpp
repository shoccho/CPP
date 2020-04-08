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
	ll i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	cin>>m;
	

	ll a[m][m];
	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			scanf("%lld",&a[i][j]);
			//printf("%lld ", a[i][j]);
		}
		//printf("\n");
	}
	
	for(i=0;i<m;i++){
	//	printf("%d\n",a[i][i] );
	 	if(i)printf(" ");
	 	//printf("%d %d %d\n", a[i][i+1],a[i][i+2],a[i+1][i+2]);
	 	if(i<m-2){
	 		//printf("f");
	 		a[i][i]=floor(sqrt((a[i][i+2]* a[i][i+1])/a[i+1][i+2] ));
	 		if(i)printf(" ");
	 		printf("%lld",a[i][i] );
	 	}
	 	else{
	 		//printf("s");
	 		a[i][i]=floor(sqrt((a[i][i-1]/a[i-1][i-1] )*(a[i-1][i])/a[i-1][i-1] ));
	 		printf(" %lld",a[i][i] );

	 	}
	}
#ifndef ONLINE_JUDGE
    printf("\n**Time -> %.10fs\n", (double)(clock()-tStart) / CLOCKS_PER_SEC);
#endif
	return 0;
}