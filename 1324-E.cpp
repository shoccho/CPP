#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
#define maxint 1000000000;

int sl=0;
int maxsl=0;
int back(int pos,int n,int k,int p,int q, int ss,int a[]){
	
	if(ss<=q && ss>=p){
		
		sl++;
		
	}
	if(pos==n){
		if(sl>maxsl)maxsl=sl;
		sl=0;
		return maxsl;
	}

	
	 return max(back(pos+1,n,k,p,q,(ss+a[pos+1])%k,a),back(pos+1,n,k,p,q,(ss+a[pos+1]-1)%k,a));

}
int main()
{	
	
			
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d %d %d %d",&n,&k,&p,&q);
	int a[n];
	for(i=0;i<n;i++)scanf("%d",a+i);
	int max=back(0,n,k,p,q,a[0],a);
	printf("%d\n",max);
	return 0;
}
