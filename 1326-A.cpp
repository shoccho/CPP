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
	scanf("%d",&k);
	int ans=0;
	
	while(k--){
		scanf("%d",&p);
		if(p==1)printf("-1\n");
		else {
			for(i=0;i<p-1;i++){
				if(!i)printf("2");
				else printf("3");
			}
			printf("9\n");
		}
	}
	
	return 0;
}