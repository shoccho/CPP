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
	cin>>j;

	
	while(j--){

		scanf("%d",&m);
		q=0;
		while(m>=10){
			l=(int)log10(m);
			q+=pow(10,l);
			m-=pow(10,l);
			m+=pow(10,l-1);

		}
		printf("%d\n",q+m);
	}

	return 0;
}
