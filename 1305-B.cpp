#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 

int main()
{	
	
			
	// freopen("i.txt","r",stdin);
	// freopen("o.txt","w",stdout);
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	cin>>x;
	n=strlen(x);
	int f=0;l=0;
	int a[n];
	m=n;
	for(i=0;i<n;i++){
		if(x[i]=='(' && a[i]!=-1){
			for(j=n-1;j>i;j-- ){
				if(x[j]==')' && a[j]!=-1){
					f++;
					a[i]=-1;
					a[j]=-1;
					
					break;
				}
			}
		}
	}
	
	for(i=0;i<n;i++){
		
		if(a[i]==-1 ){
			q++;
		}

	}
	if(q)printf("1\n");
	else {
		printf("0\n");
		return 0;
	}
	printf("%d\n", q);
	for(i=0;i<n;i++){
		
		if(a[i]==-1 ){
			if(i)printf(" ");
			printf("%d",i+1);
		}

	}
	printf("\n");


	return 0;
}