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
	
	scanf("%d %d %d %d",&l,&m,&n,&o);
	int max=1;
	for(i=0;i<=4000;i++){
		for(j=0;j<=4000;j++){
			q=l-(i*m+j*n);
			if(q>=0 && q%o==0){
				p=i+j+q/o;	
			
			if(p>max)max=p;
		}
		}
	}
	
	printf("%d\n",max );
	return 0;
}