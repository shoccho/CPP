#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{	
	FastIO;
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p;
	char x[100000],y[1000000];
	while(1){
		scanf("%d",&j);
		if(j==0)break;
		scanf("%d %d",&m,&n);
		for(i=0;i<j;i++){
			scanf("%d %d",&k,&l);
			if(k==m || l==n )printf("divisa\n");
			else if(k>m && l>n)printf("NE\n");
			else if(k<m && l>n)printf("NO\n");
			else if(k>m && l<n)printf("SE\n");
			else if(k<m && l<n)printf("SO\n");
		}
	}


	return 0;
}