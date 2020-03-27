#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 

int main()
{	
	
			
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&m);
	while(m--){
		scanf("%d",&n);
		int a[n];
		int b[n];
		for(i=0;i<n;i++)scanf("%d",a+i);
		for(i=0;i<n;i++)scanf("%d",b+i);
		sort(a,a+i);
		sort(b,b+i);
		for(i=0;i<n;i++){
			printf("%d",a[i]);
			if(i<n-1)printf(" ");
			else printf("\n");
		}
		
		for(i=0;i<n;i++){
			printf("%d",b[i]);
			if(i<n-1)printf(" ");
			else printf("\n");
		}


	}

	return 0;
}