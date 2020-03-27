#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max(a,b,c) max(a,max(b,c))
#define min(a,b,c) min(a,min(b,c))
#define ll long long
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL)

int main()
{	
	FastIO;
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p;
	char x[100000],y[1000000];
	scanf("%d",&l);
	while(l--){
		scanf("%d",&j);
		int a[j];
		p=0;
		for(i=0;i<j;i++){scanf("%d",a+i);p+=a[i];}
		p/=j;
		n=0;
		for(i=0;i<j;i++){if(a[i]>p)n++;}
			double res=n/(j*1.0);
		printf("%.3lf%\n",res*100);


	}

	return 0;
}