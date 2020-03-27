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
	scanf("%d",&l);
	int a[l];
	for(i=0;i<l;i++)scanf("%d",a+i);
	sort(a,a+i);
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&p);
		int hi=l-1;
		int lo=0;
		int mid;
		k=-1;
		while(hi>=lo){
			 mid=((hi+lo)/2);
			if(a[mid]<=p){
				k=mid;
				lo=mid+1;

			}
			else if(a[mid]>p)hi=mid-1;
			
		}
		printf("%d\n",k+1);
	}
	
	return 0;
}