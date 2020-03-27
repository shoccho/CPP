#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long


int main()
{	
	
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%s %s",x,y);
	m=strlen(x);
	n=strlen(y);
	int a[m+1][n+1];
	for(i=0;i<=m;i++)a[i][0]=0;
	for(i=0;i<=n;i++)a[0][i]=0;

	for(i=1;i<=m;i++)
		for(j=1;j<=n;j++){
			if(x[i-1]==y[j-1])a[i][j]=a[i-1][j-1]+1;
			else a[i][j]=max(a[i][j-1],a[i-1][j]);
		}
		printf("%d\n",a[m][n]);

	for(i=0;i<=m;i++){
		for(j=0;j<=n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}