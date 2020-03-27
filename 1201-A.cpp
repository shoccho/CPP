#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;
//reverse sort(a,a+n,greater<int>());

int a[10000][5];
int main()
{	
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);
		int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	
	scanf("%d %d",&n,&m);
	int a[m],b[m],c[m],d[m],e[m];
	p=n;
	for(i=0;i<m;i++){
		a[i]=0;
		b[i]=0;
		c[i]=0;
		d[i]=0;
		e[i]=0;
		
	}
	for(i=0;i<n;i++)
	{	scanf("%s",x);
		for(j=0;x[j]!='\0';j++){
			if(x[j]=='A')a[j]++;
			else if(x[j]=='B')b[j]++;
			else if(x[j]=='C')c[j]++;
			else if(x[j]=='D')d[j]++;
			else if(x[j]=='E')e[j]++;
		}
	}
	ll res=0;
	for(i=0;i<m;i++){
		scanf("%d",&p);
		int mm=0;
		if(a[i]>mm)mm=a[i];
		if(b[i]>mm)mm=b[i];
		if(c[i]>mm)mm=c[i];
		if(d[i]>mm)mm=d[i];
		if(e[i]>mm)mm=e[i];
		res+=mm*p;
	}
	printf("%lld\n",res );
	return 0;
}