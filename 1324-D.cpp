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
	
			
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&n);
	int a[n];
	ll as[n];
	as[0]=0;
	int b[n];
	ll bs[n];
	bs[0]=0;
	for(i=0;i<n;i++){
		scanf("%d",a+i);
		if(i)as[i]=as[i-1]+a[i];
		else as[i]=a[i];
	}
	for(i=0;i<n;i++){
		scanf("%d",b+i);
		
	}
	
	
	return 0;
}