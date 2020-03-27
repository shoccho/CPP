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


	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		int a[m];
		std::vector<int> v;
		for(i=0;i<m;i++){
			scanf("%d",a+i);
			if(a[i]%2==0){
				v.push_back(i);
			}
		}
		if(v.size()>0)printf("1\n%d\n",v[0]+1);
		
		else if(m>1) printf("2\n1 2\n");
		else printf("-1\n");
		}
	

	return 0;
}
