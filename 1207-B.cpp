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
	scanf("%d %d",&n,&m);
	int a[n][m];
	std::vector< pair<int ,int> > res;
	int oc=0;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<m-1;j++){
			if(a[i][j]>=1 && a[i+1][j+1]>=1 && a[i+1][j]>=1 && a[i][j+1]>=1 ){
				a[i][j]=2;
				a[i+1][j+1]=2;
				a[i+1][j]=2;
				a[i][j+1]=2; 
				res.PB(MP(i,j));
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j]==1)oc++;
		}
	}
	if(oc)printf("-1\n");
	else {
		cout<<res.size()<<"\n";
		for(auto ss : res){
			printf("%d %d\n",ss.F+1,ss.S+1);
		}
	}
	return 0;
}