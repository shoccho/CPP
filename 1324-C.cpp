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
	char x[1000000],y[1000000];
	scanf("%d",&k);
	while(k--){
		int d=1;
		scanf("%s",x);
		
		int max=0;
		i=0;
		while(x[i]!='\0')
		{
			if(x[i]=='R'){
				if(d>max)max=d;
				d=1;
			}else {
				d++;
			}
			i++;
		}
		if(d>max)max=d;
		printf("%d\n",max);
	}
	
	return 0;
}