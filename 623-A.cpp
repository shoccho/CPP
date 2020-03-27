#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long


int main()
{


	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&j);
	while(j--){
		scanf("%d %d %d %d",&m,&n,&o,&p);
		int q1=(o)*n;
		int q2=(m-(o+1))*n;
		int q3=m*(p);
		int q4=m*(n-(p+1));
		printf("%d\n",max( max(q1,q2) , max(q3,q4) ));

	}

	return 0;
}
