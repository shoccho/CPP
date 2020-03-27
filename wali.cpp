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
	printf("Enter Multiplicand Digits (n): ");
	scanf("%d",&n);
	int a[n];
	printf("Enter Multiplicands (From n-1 th digit to 0th digit): \n");
	for(i=0;i<n;i++)scanf("%d",a+i);
		printf("Enter Multiplier Digits (m): \n");
	scanf("%d",&m);
	int b[m];
	printf("Enter Multiplier (From m-1 th digit to 0th digit): \n");
	for(i=0;i<m;i++)scanf("%d",b+i);
	int res[m][n+m];
	for(i=0;i<m;i++){
		for(j=0;j<n+m;j++)res[i][j]=0;
	}
printf("ntermediate Results: (From n+m-1 th column to 0th column and 0th row to m-1 th row)\n");
	int shift=0;
	int laspos=n+m-1;
	for(i=m-1;i>=0;i--){
		int laspos=n+m-1-shift;
		for(j=n-1;j>=0;j--){
			
			res[shift][laspos]+=(b[i]*a[j]);
			if(res[shift][laspos]>=10){
				res[shift][laspos-1]=res[shift][laspos]/10;
				res[shift][laspos]%=10;
			}
			laspos--;

		}
		shift++; 
	}
	for(i=0;i<m;i++){
		for(j=0;j<n+m;j++){
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
	ll final[n+m];
	for(i=0;i<n+m;i++)final[i]=0;
		int last=n+m-1;
	for(i=n+m-1;i>=0;i--){
		ll col_sum=0; 
		for(j=0;j<m;j++){
			col_sum+=res[j][i];
		}
		//printf("col_sum %lld\n",col_sum);
		int be=0;
		while(col_sum>0){
			final[last-be]+=col_sum%10;
			be++;
			col_sum/=10;
		}if(final[last]>=10){
			final[last-1]=final[last]/10;
			final[last]%=10;

		}
		last--;
	}
	printf("Final Result (From n+m-1 th column to 0th column and 0th row to m-1 th row)\n");
	for(j=last+1;j<n+m;j++){
		printf("%lld ",final[j]);
	}
	return 0;
}