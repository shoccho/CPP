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
	scanf("%d",&p);
	while(p--){
		scanf("%d",&n);
		int a[n];
		l=0;
		for(i=0;i<n;i++)scanf("%d",a+i);
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i]>a[j]){swap(a[i],a[j]);l++;}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",l);
	}


	return 0;
}