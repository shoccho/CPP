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
	scanf("%d",&n);
	ll total=0;
	std::vector<int> v;
	int s=0;
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		total+=a[i];
	}
	if(a[0]>total/2){
		printf("1\n1\n");
		return 0;
	}
	else {
		ll temp=0;
		std::vector<int> tt;
		i=0;
		temp+=a[i];
		int si=1;
		tt.push_back(i);
		for(i=1;i<n;i++){
			if(a[i]<=a[0]/2){
				temp+=a[i];
				si++;
				tt.push_back(i);
			}
		}
		if(temp>total/2){
			printf("%d\n",si);
			for(i=0;i<si;i++){
				if(i)printf(" ");
				printf("%d",tt[i]+1);
			}
			printf("\n");
		}
		else printf("0\n");
	}
	
	return 0;
}