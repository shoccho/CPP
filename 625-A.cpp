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
	
	scanf("%d",&m);
	int a[m];
	int b[m];
	int total1=0;
	int total2=0;
	int hash[m];
	for(i=0;i<m;i++){
		scanf("%d",a+i);
		total1+=a[i];
		hash[i]=a[i];

	}

	for(i=0;i<m;i++){
		scanf("%d",b+i);
		total2+=b[i];
		if(b[i] && hash[i]){
			
			total1-=1;
			total2-=1;
		}
	}
	
	if((total2==total1 && total1==0) ||total1 ==0 ){
		printf("-1\n");
		return 0;
	}
	// if(total1>total2){
	// 	printf("1\n");
	// 	return 0;
	// }

	{
		printf("%d\n",(total2/total1)+1);
	}
	return 0;
}