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
	scanf("%d %d",&n,&m);
	int a[n];
	map <int,int>ma;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		ma[a[i]]++;
	}
	int oddc=0;
	int res=0;
	for(i=0;i<n;i++){
		//printf("%d\n", ma[a[i]]);
		if(ma[a[i]]%2==1){
			res+=ma[a[i]]-1;
			ma[a[i]]=0;
		
			oddc++;
		}
		else  {
			res+=ma[a[i]];
			ma[a[i]]=0;

		}

	}
	printf("%d\n",res+((oddc+1)/2));
	return 0;
}