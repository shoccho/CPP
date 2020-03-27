#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long

int a[100000000];

int mx =100000000;

void seive (){
	int i,j,k,l,m,n;
	a[0]=14050;
	a[1]=1;
	for(i=2;i*i<mx;i++){
		if(!a[i]){
			for(j=2;j*i<mx;j++){
				a[i*j]=1;
			}
		}
	}

}
int main()
{	
	
		
	freopen("i.txt","r",stdin);
	freopen("o.txt","w",stdout);

	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	seive();
	if(!a[999983])printf("%d\n",99983);
	return 0;
}