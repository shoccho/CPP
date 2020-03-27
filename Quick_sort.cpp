#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long

void quick_sor(int a[],int f, int l){
	int i,j,p;
	p=l;
	for(i=f;i<p && p>0;){
		if(a[i]<a[p])i++;
		else {
			if(p>1){
			swap(a[i],a[p-1]);
			swap(a[p-1],a[p]);
			p--;
			}
			else swap(a[i],a[p]);
		}
	}
	if(p>0)
		quick_sor(a,0,p-1);
	if(p<l-1)
	quick_sor(a,p+1,l);
	return ;
}

int main()
{		
	
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	cin>>j;

	int a[j];
	for(i=0;i<j;i++){
	scanf("%d",&a[i]);
	}
	quick_sor(a,0,j-1);
	
	for(i=0;i<j;i++)printf("%d\n",a[i] );

	return 0;
}