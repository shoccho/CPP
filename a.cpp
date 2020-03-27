#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long


int main()
{	
	
		

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&j);
	int a[j];
	int total =0;
	for(i=0;i<j;i++){
		scanf("%d",&a[i]);
		total+=a[i];
	}
	int avg= ceil(total/(j*1.0));
	int total_cost=0;
	for(i=0;i<j;i++){
		if(abs(a[i]-avg)<=1) continue;
		else {
			total_cost+= abs(avg-a[i]);
			
		}
	}
printf("%d %d\n",avg,total_cost);
	return 0;
}