#include<bits/stdc++.h>
using namespace std;

#define pi 2*acos(0.0)
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
#define ll long long
#define powof2(n) 1<<n
#define sumTillPowof2(n)  (1 << (n + 1)) - 1; 
unsigned ll  a[9999999];

unsigned ll  mx =9999999;
 map<unsigned ll,unsigned ll> ma;
void seive (){
	unsigned ll int i,j,k,l,m,n;
	a[0]=14050;
	a[1]=1;
	for(i=2;i<mx;i++){
		if(!a[i]){
			ma[(i*i)]=1;
			for(j=2;j*i<mx;j++){
				a[i*j]=1;
			}
		}
	}

}int main()
{	
	

	// freopen("i.txt", "r", stdin);
	// freopen("o.txt", "w", stdout);
seive();
	int i,j,k,l,m,n,o,p,q=0;
	char x[100000],y[1000000];
	scanf("%d",&n);
	unsigned ll in;
	while(n--){
		cin>>in;
		//cout<<in<<endl;
		
		if(ma[in]==1 ){
			printf("YES\n");

		}
		else printf("NO\n");
	}
	
	
	return 0;
}