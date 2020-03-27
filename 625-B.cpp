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
	scanf("%d",&n);
	int a[n];
	ll uptill[n];
	uptill[0]=0;
	int max=0;
	for(i=0;i<n;i++){
		scanf("%d",a+i);
		int tt=a[i];
		for(j=i;j>=0;j--){
			if(abs(i-j)==abs(a[i]-a[j]) && a[i]>a[j])tt+=a[j];
		}
			if(tt>max)max=tt;
	}
	
	
printf("%d\n",max);
	return 0;
}
