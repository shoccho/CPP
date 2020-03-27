#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
int main()
{	
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	
	scanf("%d",&m);
	int b[m];
	
	for(i=0;i<m;i++)scanf("%d",b+i);
	scanf("%d",&n);
	int g[n];

	for(i=0;i<n;i++)scanf("%d",g+i);	
	sort(b,b+m);
	sort(g,g+n);

	for(i=0;i<m;i++){

		for(j=0;j<n;j++){
			
			if(abs(g[j]-b[i])<=1){
				
					g[j]=10000;
				q++;
				break;
			}
		}
	}
	printf("%d\n", q);
	return 0;
}