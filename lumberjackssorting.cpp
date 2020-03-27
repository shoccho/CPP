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
	char x[100000],y[1000000];
	cin>>j;
	printf("Lumberjacks:\n");

	while(j--){
		int a[10];
		int f=0,rf=0;
		for(i=0;i<10;i++){
			cin>>a[i];
			if(f==0 && i>0){
				
				if(a[i]>a[i-1]) f=1;
				else if(a[i]<a[i-1])f=2;
			}
			else if(f==1 && a[i]<a[i-1])rf=-1;
			else if(f==2 && a[i]>a[i-1])rf=-1;
		}
		if(rf!=-1)printf("Ordered\n");
		else printf("Unordered\n");
	}

	return 0;
}