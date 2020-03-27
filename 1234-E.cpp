#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
vector<vector<int> > dp(2001,vector<int> (2001,0));
//vector<vector<int> > vec( n , vector<int> (m, 0)); 
int main()
{	
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d %d %d %d",&n,&l,&p,&q);
	int a[n];

	
	dp[0][0]=0;
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	
	}
	int sum=0;
	for(i=0;i<n;i++){
		sum+=a[i];
		for(j=0;j<n;j++){
			dp[i+1][j]=max(dp[i+1][j],	dp[i][j]+(((sum-j)%l>= p && (sum-j)%l<= q)));

			if(j<n){
				dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+(((sum-j-1)%l>=p && (sum-j-1)%l<=q)));
			}
		}
	}
	int max=0;
	for(i=1;i<=n;i++){
		if(dp[n][i]>max)max=dp[n][i];
	}
	printf("%d\n",max);
	return 0;
}