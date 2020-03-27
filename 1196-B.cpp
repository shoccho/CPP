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
int main()
{	
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&k);
	while(k--){

		scanf("%d %d",&n,&m);
		int a[n];
		int c=0;
		vector<int>pos;
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
			if(a[i]%2==1 ){
				c++;
				pos.push_back(i);
			}
		}
		if(c<m ){
			printf("NO\n");
		}
		else if(c%2 !=m%2){
			printf("NO\n");
		}
		else {
			printf("YES\n");
			for(i=0;i<m-1;i++){
				if(i)printf(" ");
				printf("%d",pos[i]+1);
			}
			if(i)printf(" ");
			printf("%d\n",n);
		}


	}
	
	return 0;
}